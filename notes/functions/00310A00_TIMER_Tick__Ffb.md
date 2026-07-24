# TIMER_Tick__Ffb

- Address: `0x00310A00`
- Size: `0x64` (100 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/timer.cpp`
- Reference source: `KS/SRC/timer.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.0 | 0.0 | `candidate.cpp` |
| 2 | different | 13.0 | 0.0 | `candidate.cpp` |
| 3 | different | 37.5 | 20.0 | `candidate.cpp` |
| 4 | different | 41.0 | 24.0 | `candidate.cpp` |
| 5 | different | 18.0 | 0.0 | `candidate.cpp` |

## Outcome

Released timer tick updates were reconstructed across five candidates, but compiler global-address register selection and branch scheduling did not match exactly.
