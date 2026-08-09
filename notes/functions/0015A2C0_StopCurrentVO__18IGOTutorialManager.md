# StopCurrentVO__18IGOTutorialManager

- Address: `0x0015A2C0`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released sound-status check and conditional stop use the shared tutorial
manager layout. A local stop-function pointer preserves the non-tail call.

## Outcome

The compiler barrier was removed; the released voice stop remains exact.
