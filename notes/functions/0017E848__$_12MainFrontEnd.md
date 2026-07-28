# _$_12MainFrontEnd

- Address: `0x0017E848`
- Size: `0x168` (360 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.2222 | 1.1111 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 51 lane A1 for `0x0017E848 _$_12MainFrontEnd`.
- Tested the exact released `MainFrontEnd::~MainFrontEnd` body once with minimal self-contained declarations preserving the five released owned-menu pointer members and their polymorphic deletion.
- Result: **different**, byte score **7.2222%** (26/360) and instruction score **1.1111%** (1/90); candidate size 224 bytes versus target size 360 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing after the test, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/MainFrontEnd.cpp:109-116`
- `kelly-slaters-pro-surfer/KS/SRC/ks/MainFrontEnd.h:23-64`
- `tmp/functions/0017E848__$_12MainFrontEnd/attempt-1/result.json`

## Outcome

The exact released MainFrontEnd destructor differed from the target; the sole attempt scored 7.2222%.
