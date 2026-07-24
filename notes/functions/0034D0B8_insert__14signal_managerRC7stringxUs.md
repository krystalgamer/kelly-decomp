# insert__14signal_managerRC7stringxUs

- Address: `0x0034D0B8`
- Size: `0x64` (100 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.0 | 16.0 | `candidate.cpp` |
| 2 | different | 17.8571 | 0.0 | `candidate.cpp` |
| 3 | different | 19.8276 | 3.4483 | `candidate.cpp` |
| 4 | different | 17.8571 | 0.0 | `candidate.cpp` |
| 5 | different | 36.0 | 16.0 | `candidate.cpp` |

## Outcome

Released signal-map insertion requires exact aggregate stack slots and copy/destruction scheduling; five source candidates did not reproduce the ABI layout.
