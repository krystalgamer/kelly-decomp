# OnTriangle__13CheatCodeMenui

- Address: `0x001D2A50`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.6316 | 47.3684 | `candidate.cpp` |
| 2 | different | 78.9474 | 78.9474 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 92.1053 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released inline body supplied the original `parent->MakeActive(NULL)` call.
The built function also plays `SS_FE_BACK`, which is absent from that inline
header body but agrees with the neighboring released front-end handlers.
Removing the unnecessary shared FEMenu layout padding restored the original
parent vptr offset.  `KELLY_DECOMP_COMPILER_BARRIER()` emits no instruction and
is narrowly required after `playEvent` to prevent a demonstrated sibling-call
optimization.

## Outcome

Matched the compiled cheat-menu back action using the released parent activation and recovered back sound event.
