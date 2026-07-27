# new_instance__t13instance_bank1Z8materialRC8material

- Address: `0x002B6030`
- Size: `0x148` (328 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source extraction

- Tested the exact released `instance_bank<T>::new_instance(const T&)` template definition once with minimal declarations for `stringx`, `material`, allocation, and the template's supporting types.
- The candidate did not compile because the isolated compiler include configuration could not resolve the released `<set>` header; result `compile_failed`, score 0.0000.
- Per FIRST PASS wave 34 lane A4 constraints, no variants, diff chasing, build, integration, finalization, queue edits, or source/prefix/shared proposal were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:14-82,117-135`
- `kelly-slaters-pro-surfer/KS/SRC/material.h:121-181`
- `tmp/functions/002B6030_new_instance__t13instance_bank1Z8materialRC8material/attempt-1/compiler.stderr:1`
- `tmp/functions/002B6030_new_instance__t13instance_bank1Z8materialRC8material/attempt-1/result.json`

## Outcome

The exact released material-bank instance creator failed the isolated compile because the set header was unavailable; the sole attempt scored 0%.
