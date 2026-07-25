# process_cell__16ai_polypath_cellP16ai_polypath_heap

- Address: `0x0010CF60`
- Size: `0xB4` (180 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath_cell.cpp`
- Reference source: `KS/SRC/ai_polypath_cell.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body matched with the shared source-faithful ai_polypath declarations. The released GCC STL vector header is not present in the reconstruction inputs, so its three-pointer GCC 2.9 layout is defined once in `g++-2/stl_vector_shared.h` and reused by the faithful heap declaration.

## Outcome

Matched A* cell processing with shared released polypath declarations.
