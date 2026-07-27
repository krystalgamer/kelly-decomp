# point_inside__11cube_markerRC8vector3d

- Address: `0x0028CBF8`
- Size: `0xF4` (244 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.cpp`
- Reference source: `KS/SRC/marker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Attempt 1 is the actual matched candidate: the exact released cube_marker::point_inside body and marker hierarchy emitted 244/244 matching bytes and 61/61 matching instructions. Attempt 2 prepended the guarded integration source without defining its selector and therefore failed with symbol_missing. Attempt 3 split the attempt 1 declarations into a complete reusable marker shared proposal, kept only the guarded exact function source for installation, defined the selector in candidate_prefix, and again matched 244/244 bytes and 61/61 instructions.

### Attempt 4 notes

Attempt 4 removes the duplicate selector wrapper from packet source. The exact include plus function body emitted 244/244 matching bytes and 61/61 matching instructions; attempts 1-3 remain preserved exactly.

## Outcome

Corrected on attempt 4: wrapper-free install_function_source input matches 100% bytes and instructions; tracked files and shared content are unchanged.
