# __10partition3RC10partition3

- Address: `0x002E81D8`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/terrain.cpp`
- Reference source: `KS/SRC/terrain.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released partition copy constructor uses the shared hyperplane base
initializer and sector pointer copy.

## Outcome

The local vector, hyperplane, and partition declarations were removed.
