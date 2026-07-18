# collide__12beach_objectP6entityRC8vector3d

- Address: `0x001FB320`
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

The target sets the word-sized base state at offset `0x24` despite the released callback body being empty.

## Outcome

The target `beach_object::collide` state set matched exactly on the first attempt.
