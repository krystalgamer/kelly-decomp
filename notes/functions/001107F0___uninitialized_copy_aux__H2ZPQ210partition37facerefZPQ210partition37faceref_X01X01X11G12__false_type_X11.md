# __uninitialized_copy_aux__H2ZPQ210partition37facerefZPQ210partition37faceref_X01X01X11G12__false_type_X11

- Address: `0x001107F0`
- Size: `0x34` (52 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical old-STL placement-copy loop uses the shared
`partition3::faceref` declaration.

## Outcome

The packed byte stand-in was removed; the released helper remains exact.
