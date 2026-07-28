# _$_8polytube

- Address: `0x0013AA30`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/polytube.cpp`
- Reference source: `KS/SRC/polytube.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.6038 | 4.0816 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 74 lane B3 — 0x0013AA30

- Confirmed no prior attempt existed.
- Used the exact released `polytube::~polytube` body with minimal self-contained declarations.
- Ran `function_test` exactly once. Result: `different`; byte score 6.6038% (28/424), instruction score 4.0816% (4/98), candidate size 112 versus target 424.
- No variants, diff chasing, retries, finalization, build, integration, commit, or tracked-file mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/polytube.cpp:370-377`
- `kelly-slaters-pro-surfer/KS/SRC/polytube.h:11-35`
- `kelly-slaters-pro-surfer/KS/SRC/b_spline.h:9-53`
- `tmp/functions/0013AA30__$_8polytube/attempt-1/result.json`
- `tmp/source_first/0013AA30/attempt-1.md`

## Outcome

The exact released polytube destructor differed at 6.6038% byte score; no source variant was attempted.
