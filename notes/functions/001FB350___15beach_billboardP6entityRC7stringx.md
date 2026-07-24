# __15beach_billboardP6entityRC7stringx

- Address: `0x001FB350`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.6667 | 96.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released constructor matched exactly after restoring the beach_object alignment gap before my_entity while preserving the shared ABI field order.

## Outcome

The released beach billboard constructor matched exactly on the second attempt.
