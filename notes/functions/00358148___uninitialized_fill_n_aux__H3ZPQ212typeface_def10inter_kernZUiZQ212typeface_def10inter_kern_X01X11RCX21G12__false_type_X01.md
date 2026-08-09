# __uninitialized_fill_n_aux__H3ZPQ212typeface_def10inter_kernZUiZQ212typeface_def10inter_kern_X01X11RCX21G12__false_type_X01

- Address: `0x00358148`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The generated old-STL loop uses the shared 12-byte
`typeface_def::inter_kern` record and shared placement new.

## Outcome

The local placement-new and inter-kern declarations were removed.
