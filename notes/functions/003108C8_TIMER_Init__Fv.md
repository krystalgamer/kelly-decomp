# TIMER_Init__Fv

- Address: `0x003108C8`
- Size: `0xE4` (228 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/timer.cpp`
- Reference source: `KS/SRC/timer.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.3333 | 1.7544 | `candidate-1-exact-released.cpp` |
| 2 | different | 8.3333 | 1.7544 | `candidate-2-built-career-layout.cpp` |
| 3 | different | 30.2632 | 15.7895 | `candidate-3-empty-scope-guard.cpp` |
| 4 | different | 30.2632 | 19.2982 | `candidate-4-function-reference-reset.cpp` |
| 5 | different | 24.5614 | 15.7895 | `candidate-5-duration-reference.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released timer initialization, target-version career layout, developer-option offsets, duration selection, and normal reset call are recovered, but four full-TU base-register and floating-compare scheduling instructions remain absent.
