# purge__t13instance_bank1Z8vr_pmesh

- Address: `0x001D7008`
- Size: `0x194` (404 bytes)
- Object: `game/files_frontend`
- Debug source: `instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 3.0928 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 69 lane A4 — 0x001D7008

- Status: **source_pending** (`different`)
- Canonical attempts: **1**
- Byte score: **25.0000%** (101/404)
- Instruction score: **3.0928%** (3/97)
- Candidate: `tmp/functions/001D7008_purge__t13instance_bank1Z8vr_pmesh/attempt-1/candidate.cpp`
- SHA-1: `b80ff577acf46f3ce5c7041e80d0c352eda6f516`
- Candidate/target size: 296/404 bytes
- Started: `2026-07-28T12:59:47.964521345Z`
- Completed: `2026-07-28T13:02:53.921603201Z`
- Duration: **185.963094178s**

The exact released `instance_bank<T>::purge` body was tested once with minimal faithful declarations. It compiled but differed. No variants, retries, diff chasing, attempts 2-5, finalization, integration, build, tracked-file edits, or git mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:13-89,253-288`
- `config/SLUS_203.34.symbol_addrs.txt:2326-2328,4845`
- `tmp/functions/001D7008_purge__t13instance_bank1Z8vr_pmesh/attempt-1/result.json`

## Outcome

The exact released vr-pmesh instance-bank purge differed at 25.0000% byte score; no source variant was attempted.
