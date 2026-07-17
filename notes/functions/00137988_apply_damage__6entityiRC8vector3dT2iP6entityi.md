# apply_damage__6entityiRC8vector3dT2iP6entityi

- Address: `0x00137988`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released body contains only an assertion plus disabled code. In the
Final build the assertion disappears, so the full-signature method is empty.

## Outcome

The released apply_damage body contains only an assertion and disabled implementation code. BUILD_FINAL removes the assertion, leaving an empty method that matched on the first attempt and preserved the full ROM checksum.
