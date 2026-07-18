# collide__15floating_objectP6entityRC8vector3d

- Address: `0x001FE758`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target sets the inherited word-sized state at offset `0x24`; the released slalom-only body is absent.

## Outcome

The target `floating_object::collide` state set matched exactly on the first attempt.
