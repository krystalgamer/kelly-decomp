# spraypt_add__5trailP15spray_control_tT1Pi

- Address: `0x003648C0`
- Size: `0x15C` (348 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.9195 | 17.2414 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 47 lane A1 for `0x003648C0 spraypt_add__5trailP15spray_control_tT1Pi`.
- Tested the exact released `trail::spraypt_add` body once with minimal self-contained declarations preserving the released `vector3d`, `spray_control_t`, and `trail` layouts needed by the function.
- Result: **different**, byte score **35.9195%** (125/348) and instruction score **17.2414%** (15/87); candidate size 332 bytes versus target size 348 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/trail.cpp:1148-1173`
- `kelly-slaters-pro-surfer/KS/SRC/ks/trail.h:20-49,64-104`
- `tmp/functions/003648C0_spraypt_add__5trailP15spray_control_tT1Pi/attempt-1/result.json`

## Outcome

The exact released trail spray-point addition differed from the target; the sole attempt scored 35.9195%.
