# _$_13CheatFrontEnd

- Address: `0x001D1428`
- Size: `0x118` (280 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.4286 | 4.2857 | `candidate.cpp` |

### Attempt 1 notes

# First pass A1 notes — _$_13CheatFrontEnd

- Used the exact released `CheatFrontEnd::~CheatFrontEnd` body with only minimal offset-bearing class declarations.
- Tested exactly once with `env/bin/python tools/function_test.py test 0x001D1428 --candidate tmp/source_first/001D1428/candidate.cpp`.
- Result: `different`; byte score 16.4286% (46/280), instruction score 4.2857% (3/70), candidate size 188 versus target 280.
- No variants, diff chasing, build, finalization, source/prefix/shared proposal, or tracked-source edits were performed.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/ks/CheatFrontEnd.cpp:64-70` — exact released destructor body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/CheatFrontEnd.h:45-88` — class inheritance, field order, and destructor declaration.
- `tmp/functions/001D1428__$_13CheatFrontEnd/attempt-1/result.json` — sole test result.

## Outcome

The exact released CheatFrontEnd destructor differed from the target; the sole attempt scored 16.4286%.
