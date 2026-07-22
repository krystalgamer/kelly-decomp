# shutdown__9SFXEngine

- Address: `0x0025DC18`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/SFXEngine.cpp`
- Reference source: `KS/SRC/ks/SFXEngine.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.75 | 70.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Immutable SFXEngine shutdown packet reproduced all six RandomVO shutdown calls in exact order, excluding didGoal.
