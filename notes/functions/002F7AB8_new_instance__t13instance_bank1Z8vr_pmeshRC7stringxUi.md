# new_instance__t13instance_bank1Z8vr_pmeshRC7stringxUi

- Address: `0x002F7AB8`
- Size: `0x1B0` (432 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.0556 | 0.9259 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 77 lane A4 — 0x002F7AB8

- Status: **source_pending** (`different`)
- Attempts: **1**
- Byte score: **18.0556%** (78/432)
- Instruction score: **0.9259%** (1/108)
- Candidate/target size: 396/432 bytes
- Candidate SHA-1: `1d6fa4e51a416b46d56d5ce8e4ed7706a4307fbb`

Tested the exact released `instance_bank<T>::new_instance(const stringx&, unsigned)` template body once for `vr_pmesh`, with minimal ABI/layout declarations. It compiled and emitted the exact target symbol, but differed. No variants, diff chasing, finalization, build, integration, tracked/reference edits, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:14-82,160-179`
- `tmp/functions/002F7AB8_new_instance__t13instance_bank1Z8vr_pmeshRC7stringxUi/attempt-1/result.json`

## Outcome

The exact released vr-pmesh instance creation differed at 18.0556% byte score; no source variant was attempted.
