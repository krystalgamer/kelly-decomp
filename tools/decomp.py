#!/usr/bin/env python3

import argparse
import csv
import hashlib
import json
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
SCRATCH_ROOT = ROOT / "tmp" / "functions"
SOL_PENDING_ROOT = ROOT / "notes" / "sol_pending"
MAX_ATTEMPTS = 5
FINAL_STATUSES = {"matched", "deferred"}
INTERIM_STATUSES = {"sol_pending"}
TRACKED_STATUSES = FINAL_STATUSES | INTERIM_STATUSES
EXCLUDED_STATUSES = {
    "excluded_handwritten",
    "excluded_sdk_runtime",
    "excluded_third_party",
    "excluded_unmapped",
}


def read_queue() -> tuple[list[str], list[dict[str, str]]]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        reader = csv.DictReader(queue_file)
        if reader.fieldnames is None:
            raise RuntimeError("Function queue has no header")
        return reader.fieldnames, list(reader)


def write_queue(fieldnames: list[str], rows: list[dict[str, str]]) -> None:
    with QUEUE_PATH.open("w", newline="", encoding="utf-8") as queue_file:
        writer = csv.DictWriter(
            queue_file,
            fieldnames=fieldnames,
            lineterminator="\n",
        )
        writer.writeheader()
        writer.writerows(rows)


def resolve(rows: list[dict[str, str]], query: str) -> dict[str, str]:
    try:
        address = int(query, 0)
    except ValueError:
        address = None
    matches = [
        row
        for row in rows
        if (
            address is not None
            and int(row["address"], 0) == address
        )
        or query in (row["symbol_name"], row["raw_name"])
    ]
    if not matches:
        raise SystemExit(f"Function not found: {query}")
    if len(matches) > 1:
        choices = ", ".join(
            f"{row['address']}:{row['symbol_name']}" for row in matches
        )
        raise SystemExit(f"Function query is ambiguous: {choices}")
    return matches[0]


def scratch_directory(row: dict[str, str]) -> Path:
    return SCRATCH_ROOT / Path(row["notes_file"]).stem


def sol_pending_path(row: dict[str, str]) -> Path:
    address = int(row["address"], 0)
    return SOL_PENDING_ROOT / f"{address:08X}.json"


def next_status(
    rows: list[dict[str, str]],
    status: str,
) -> dict[str, str]:
    for row in rows:
        if row["status"] == status:
            return row
    raise SystemExit(f"No {status} eligible functions remain")


def print_next(row: dict[str, str], as_json: bool) -> None:
    if as_json:
        print(json.dumps(row, indent=2, sort_keys=True))
        return
    print(
        f"{row['address']} {row['size_hex']} {row['symbol_name']}\n"
        f"source: {row['reference_file'] or row['source_file']}\n"
        f"object: {row['object_id']}"
    )


def read_attempts(row: dict[str, str]) -> list[dict[str, object]]:
    path = scratch_directory(row) / "attempts.json"
    if not path.exists():
        raise SystemExit(f"No attempts found for {row['symbol_name']}")
    return json.loads(path.read_text(encoding="utf-8"))


def attempt_notes(row: dict[str, str], attempt_number: int) -> str:
    handoff_path = sol_pending_path(row)
    if handoff_path.exists():
        handoff = json.loads(handoff_path.read_text(encoding="utf-8"))
        for attempt in handoff["attempts"]:
            if int(attempt["attempt"]) == attempt_number:
                return str(attempt.get("notes", "")).strip()

    path = (
        scratch_directory(row)
        / f"attempt-{attempt_number}"
        / "notes.md"
    )
    if not path.exists():
        return ""
    return path.read_text(encoding="utf-8").strip()


def write_sol_pending_handoff(
    row: dict[str, str],
    attempts: list[dict[str, object]],
) -> None:
    scratch = scratch_directory(row)
    records = []
    for attempt in attempts:
        attempt_number = int(attempt["attempt"])
        attempt_directory = scratch / f"attempt-{attempt_number}"
        candidate_path = attempt_directory / str(attempt["candidate_file"])
        records.append(
            {
                **attempt,
                "source": candidate_path.read_text(encoding="utf-8"),
                "notes": attempt_notes(row, attempt_number),
            }
        )

    path = sol_pending_path(row)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(
        json.dumps(
            {
                "address": row["address"],
                "raw_name": row["raw_name"],
                "attempts": records,
            },
            indent=2,
            sort_keys=True,
        )
        + "\n",
        encoding="utf-8",
    )


def validate_sol_pending_handoff(
    row: dict[str, str],
) -> dict[str, object]:
    path = sol_pending_path(row)
    if not path.exists():
        raise SystemExit(
            f"Sol-pending handoff is missing: {row['symbol_name']}"
        )
    handoff = json.loads(path.read_text(encoding="utf-8"))
    attempts = handoff.get("attempts", [])
    if (
        handoff.get("address") != row["address"]
        or len(attempts) != 3
        or [int(attempt.get("attempt", 0)) for attempt in attempts]
        != [1, 2, 3]
        or any(attempt.get("status") == "matched" for attempt in attempts)
        or any(not attempt.get("candidate_sha1") for attempt in attempts)
        or any(not str(attempt.get("source", "")).strip() for attempt in attempts)
        or any(not str(attempt.get("notes", "")).strip() for attempt in attempts)
        or any(
            hashlib.sha1(str(attempt["source"]).encode()).hexdigest()
            != attempt["candidate_sha1"]
            for attempt in attempts
        )
    ):
        raise SystemExit(
            f"Sol-pending handoff is invalid: {row['symbol_name']}"
        )
    return handoff


def validate_sol_pending_prefix(
    row: dict[str, str],
    attempts: list[dict[str, object]],
) -> None:
    handoff = validate_sol_pending_handoff(row)
    expected = [
        {
            key: value
            for key, value in attempt.items()
            if key not in ("source", "notes")
        }
        for attempt in handoff["attempts"]
    ]
    actual = attempts[: len(expected)]
    if actual != expected:
        raise SystemExit(
            f"Sol attempts do not preserve the Luna prefix: "
            f"{row['symbol_name']}"
        )
    scratch = scratch_directory(row)
    for record in handoff["attempts"]:
        candidate_path = (
            scratch
            / f"attempt-{record['attempt']}"
            / str(record["candidate_file"])
        )
        if (
            not candidate_path.exists()
            or hashlib.sha1(candidate_path.read_bytes()).hexdigest()
            != record["candidate_sha1"]
        ):
            raise SystemExit(
                f"Sol scratch source does not preserve the Luna prefix: "
                f"{row['symbol_name']}"
            )


def render_note(
    row: dict[str, str],
    attempts: list[dict[str, object]],
    status: str,
    summary: str,
) -> str:
    lines = [
        f"# {row['raw_name']}",
        "",
        f"- Address: `{row['address']}`",
        f"- Size: `{row['size_hex']}` ({row['size_bytes']} bytes)",
        f"- Object: `{row['object_id']}`",
        f"- Debug source: `{row['source_file']}`",
        f"- Reference source: `{row['reference_file']}`",
        f"- Result: **{status}**",
        "",
        "## Attempts",
        "",
        "| # | Status | Byte score | Instruction score | Candidate |",
        "| ---: | --- | ---: | ---: | --- |",
    ]
    for attempt in attempts:
        lines.append(
            "| {attempt} | {status} | {score} | {instruction_score} | "
            "`{candidate}` |".format(
                attempt=attempt["attempt"],
                status=attempt["status"],
                score=attempt.get("score", 0),
                instruction_score=attempt.get("instruction_score", 0),
                candidate=attempt["candidate_file"],
            )
        )

    for attempt in attempts:
        notes = attempt_notes(row, int(attempt["attempt"]))
        if not notes:
            continue
        lines.extend(
            (
                "",
                f"### Attempt {attempt['attempt']} notes",
                "",
                notes,
            )
        )

    lines.extend(("", "## Outcome", "", summary.strip(), ""))
    return "\n".join(lines)


def run_checked(*args: str) -> None:
    subprocess.run(args, cwd=ROOT, check=True)


def finalize(
    fieldnames: list[str],
    rows: list[dict[str, str]],
    row: dict[str, str],
    status: str,
    summary: str,
) -> None:
    current_status = row["status"]
    if current_status not in ("pending", "sol_pending"):
        raise SystemExit(
            f"{row['symbol_name']} is already {row['status']}"
        )
    if status == "sol_pending" and current_status != "pending":
        raise SystemExit(
            f"{row['symbol_name']} cannot return to sol_pending"
        )
    if current_status == "sol_pending" and any(
        queued["status"] == "pending" for queued in rows
    ):
        raise SystemExit(
            "Sol second-pass work cannot start while pending functions remain"
        )

    attempts = read_attempts(row)
    if not attempts:
        raise SystemExit("At least one attempt is required")
    if len(attempts) > MAX_ATTEMPTS:
        raise SystemExit("Attempt history exceeds the five-attempt limit")
    if current_status == "pending":
        if len(attempts) > 3:
            raise SystemExit(
                "A pending function cannot consume Sol attempts 4-5"
            )
        if status == "deferred":
            raise SystemExit(
                "A pending function must enter sol_pending before deferral"
            )
    else:
        validate_sol_pending_prefix(row, attempts)

    matched_attempts = [
        attempt for attempt in attempts if attempt["status"] == "matched"
    ]
    if status == "matched":
        if not matched_attempts:
            raise SystemExit("Cannot finalize matched without a 100% attempt")
        if current_status == "sol_pending" and len(attempts) < 4:
            raise SystemExit(
                "A Sol match must preserve the three-attempt Luna prefix"
            )
        run_checked(
            "sha1sum",
            "-c",
            "config/SLUS_203.34.rom.sha1",
        )
    elif status == "sol_pending":
        if len(attempts) != 3:
            raise SystemExit(
                "A sol_pending function must record exactly three attempts"
            )
        if matched_attempts:
            raise SystemExit("Cannot queue a matched function for Sol")
    else:
        if matched_attempts:
            raise SystemExit("Cannot defer a matched function")
        if len(attempts) != MAX_ATTEMPTS:
            raise SystemExit(
                "A deferred function must record exactly five attempts"
            )

    run_checked("./env/bin/python", "tools/check_reference.py")
    remove_handoff = current_status == "sol_pending"
    if status == "sol_pending":
        write_sol_pending_handoff(row, attempts)

    best_score = max(float(attempt.get("score", 0)) for attempt in attempts)
    row["status"] = status
    row["attempts"] = str(len(attempts))
    row["best_score"] = f"{best_score:.4f}".rstrip("0").rstrip(".")
    row["commit"] = "SELF"

    note_path = ROOT / row["notes_file"]
    note_path.parent.mkdir(parents=True, exist_ok=True)
    note_path.write_text(
        render_note(row, attempts, status, summary),
        encoding="utf-8",
    )
    if remove_handoff:
        sol_pending_path(row).unlink(missing_ok=True)
    write_queue(fieldnames, rows)
    print(note_path.relative_to(ROOT))


def check_queue(rows: list[dict[str, str]]) -> None:
    if len(rows) != 9078:
        raise SystemExit(f"Expected 9078 functions, found {len(rows)}")

    addresses = [row["address"] for row in rows]
    if len(addresses) != len(set(addresses)):
        raise SystemExit("Function queue contains duplicate addresses")

    eligible = [
        row for row in rows if row["classification"] == "eligible"
    ]
    expected_order = sorted(
        eligible,
        key=lambda row: (
            int(row["size_bytes"]),
            int(row["address"], 0),
        ),
    )
    if [row["address"] for row in eligible] != [
        row["address"] for row in expected_order
    ]:
        raise SystemExit("Eligible function queue is not size/address sorted")

    for row in rows:
        status = row["status"]
        attempts = int(row["attempts"])
        if status == "pending":
            if attempts != 0:
                raise SystemExit(
                    f"Pending function has attempts: {row['symbol_name']}"
                )
            continue
        if status in EXCLUDED_STATUSES:
            if status != row["classification"]:
                raise SystemExit(
                    f"Exclusion mismatch: {row['symbol_name']}"
                )
            continue
        if status not in TRACKED_STATUSES:
            raise SystemExit(f"Unknown status {status}: {row['symbol_name']}")
        if not 1 <= attempts <= MAX_ATTEMPTS:
            raise SystemExit(
                f"Invalid attempt count for {row['symbol_name']}: {attempts}"
            )
        if status == "sol_pending" and attempts != 3:
            raise SystemExit(
                f"Sol-pending function lacks three attempts: "
                f"{row['symbol_name']}"
            )
        if status == "sol_pending":
            validate_sol_pending_handoff(row)
        if status == "deferred" and attempts != MAX_ATTEMPTS:
            raise SystemExit(
                f"Deferred function lacks five attempts: {row['symbol_name']}"
            )
        if row["commit"] != "SELF":
            raise SystemExit(
                f"Finalized function lacks SELF commit marker: {row['symbol_name']}"
            )
        if not (ROOT / row["notes_file"]).exists():
            raise SystemExit(
                f"Finalized function note is missing: {row['symbol_name']}"
            )

    print("Function queue is consistent")


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Manage the durable decompilation queue."
    )
    subparsers = parser.add_subparsers(dest="command", required=True)

    next_parser = subparsers.add_parser("next")
    next_parser.add_argument("--json", action="store_true")
    next_parser.add_argument(
        "--status",
        choices=("pending", "sol_pending"),
        default="pending",
    )

    finalize_parser = subparsers.add_parser("finalize")
    finalize_parser.add_argument("function")
    finalize_parser.add_argument(
        "--status",
        choices=("matched", "deferred", "sol_pending"),
        required=True,
    )
    finalize_parser.add_argument("--summary", required=True)

    subparsers.add_parser("check")

    args = parser.parse_args()
    fieldnames, rows = read_queue()
    if args.command == "next":
        if args.status == "sol_pending" and any(
            row["status"] == "pending" for row in rows
        ):
            raise SystemExit(
                "Sol second-pass work cannot start while pending "
                "functions remain"
            )
        print_next(next_status(rows, args.status), args.json)
    elif args.command == "finalize":
        finalize(
            fieldnames,
            rows,
            resolve(rows, args.function),
            args.status,
            args.summary,
        )
    else:
        check_queue(rows)
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except subprocess.CalledProcessError as error:
        print(
            f"Command failed with exit code {error.returncode}: {error.cmd}",
            file=sys.stderr,
        )
        raise SystemExit(error.returncode)
