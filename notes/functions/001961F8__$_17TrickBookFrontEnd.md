# _$_17TrickBookFrontEnd

- Address: `0x001961F8`
- Size: `0x160` (352 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.5114 | 1.1364 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released destructor/minimal declarations

- FIRST PASS wave 47 lane B1 for `0x001961F8 _$_17TrickBookFrontEnd`.
- Tested the exact released destructor body once with minimal declarations for `FEMultiMenu`, `TextString`, `FEMenu`, and the released member order. `NUM_TYPES` was concretized as four from the released trick-book enum.
- Result: **different** — 37/352 compared bytes (10.5114%) and 1/88 instructions (1.1364%); candidate size 232 versus target size 352.
- The body reproduced the two scalar deletes, four submenu deletes, and four trick-array deletes, but minimal base/element declarations did not reproduce the released virtual-delete and base-destructor chains.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/TrickBookFrontEnd.cpp:127-136`
- `kelly-slaters-pro-surfer/KS/SRC/ks/TrickBookFrontEnd.h:11-34`
- `kelly-slaters-pro-surfer/KS/SRC/ks/trickdata.h:354-363`
- `attempt-1/result.json`

## Outcome

The exact released TrickBookFrontEnd destructor differed from the target; the sole attempt scored 10.5114%.
