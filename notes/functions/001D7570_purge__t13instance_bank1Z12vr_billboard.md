# purge__t13instance_bank1Z12vr_billboard

- Address: `0x001D7570`
- Size: `0x194` (404 bytes)
- Object: `game/files_frontend`
- Debug source: `instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- FIRST PASS wave69 B1 for `0x001D7570 purge__t13instance_bank1Z12vr_billboard`.
- Tested exactly once: the exact released `instance_bank<T>::purge()` body with minimal declarations for `stringx`, `vr_billboard`, the bank reference record, comparators, and PS2 `set` specializations.
- Result: **compile_failed** (score `0.0`). The isolated compiler could not resolve the released `<set>` header.
- No retry, declaration variant, diff chase, finalize, build, integration, tracked/reference edit, commit, or push was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:14-52,253-287`
- `kelly-slaters-pro-surfer/KS/SRC/billboard.h:13-22`
- `tmp/functions/001D7570_purge__t13instance_bank1Z12vr_billboard/attempt-1/candidate.cpp`
- `tmp/functions/001D7570_purge__t13instance_bank1Z12vr_billboard/attempt-1/compiler.stderr:1`
- `tmp/functions/001D7570_purge__t13instance_bank1Z12vr_billboard/attempt-1/result.json`

## Outcome

The exact released billboard instance-bank purge failed to compile in the isolated bench; no source variant was attempted.
