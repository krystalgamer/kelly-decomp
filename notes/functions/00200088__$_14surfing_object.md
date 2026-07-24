# _$_14surfing_object

- Address: `0x00200088`
- Size: `0x74` (116 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.1724 | 75.8621 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released surfing-object inheritance, vtable/member offsets, despawn, animation-handler deletion, string destruction, and water-object base destruction. Preventing the base tail call matched on attempt 2.

## Outcome

Matched surfing object destructor
