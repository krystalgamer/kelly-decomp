# __uninitialized_fill_n_aux__H3ZP14vertex_contextZUiZ14vertex_context_X01X11RCX21G12__false_type_X01

- Address: `0x00357948`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.4375 | 62.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released 44-byte uninitialized fill matched after giving vertex_context its exact four-byte alignment, producing unaligned 64-bit chunks and an aligned final word.

## Outcome

The released vertex context uninitialized fill matched exactly on the second attempt.
