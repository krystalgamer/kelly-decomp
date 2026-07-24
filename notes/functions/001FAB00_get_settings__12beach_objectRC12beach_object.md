# get_settings__12beach_objectRC12beach_object

- Address: `0x001FAB00`
- Size: `0x80` (128 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.9688 | 84.375 | `candidate.cpp` |
| 2 | different | 95.3125 | 93.75 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released beach-object settings copy matched after correcting the string offset and using a non-emitting scheduling boundary before assignment.

## Outcome

The released beach-object settings copy matched exactly on the third attempt.
