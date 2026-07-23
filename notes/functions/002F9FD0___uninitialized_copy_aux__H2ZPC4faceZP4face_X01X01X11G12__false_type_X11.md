# __uninitialized_copy_aux__H2ZPC4faceZP4face_X01X01X11G12__false_type_X11

- Address: `0x002F9FD0`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released face copy constructor and six unsigned-short fields, then reconstructed the generated uninitialized-copy loop, null placement check, and false-type dispatch. It matched byte-exactly.

## Outcome

Matched generated face uninitialized copy helper
