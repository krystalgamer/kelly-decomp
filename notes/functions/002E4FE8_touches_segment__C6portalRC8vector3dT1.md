# touches_segment__C6portalRC8vector3dT1

- Address: `0x002E4FE8`
- Size: `0x1B0` (432 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/portal.cpp`
- Reference source: `KS/SRC/portal.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.463 | 26.8519 | `candidate.cpp` |

### Attempt 1 notes

# First pass wave77 A3 — touches_segment__C6portalRC8vector3dT1

- Tested one candidate only: the exact released function body, with minimal standalone type/layout declarations (the released `__fabs` intrinsic is spelled `__builtin_fabsf` for the isolated compiler).
- Result: `different`; byte score `50.4630%` (218/432), instruction score `26.8519%` (29/108); candidate 428 bytes, target 432 bytes.
- No variants, diff chase, finalization, integration, tracked-file edits, build, or commit.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/portal.cpp:156-168`
- `kelly-slaters-pro-surfer/KS/SRC/portal.h:19-48`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_algebra.h:292-403`
- `tmp/functions/002E4FE8_touches_segment__C6portalRC8vector3dT1/attempt-1/result.json`

## Outcome

The exact released portal segment-touch test differed at 50.4630% byte score; no source variant was attempted.
