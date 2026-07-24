# __uninitialized_copy_aux__H2ZPC7stringxZP7stringx_X01X01X11G12__false_type_X11

- Address: `0x00310FF8`
- Size: `0x60` (96 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the generated const stringx copy behavior, 8-byte stride, and copy constructor ABI. It matched on attempt 1.

## Outcome

Matched const string uninitialized copy
