# TurnDegree__22kellyslater_controller

- Address: `0x002138B8`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released left-stick read and absolute-value calculation matched exactly with `stick`/`degree` at offsets 0x16a8/0x16ac and PAD_LSTICK_H value 203.

## Outcome

The released controller turn-degree update matched exactly on the first attempt.
