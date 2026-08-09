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

The released left-stick read and absolute-value calculation use the shared
controller fields at their recovered offsets.

## Outcome

The local 0x16a8-byte layout and symbol wrapper were removed; the released
update remains exact.
