# __uninitialized_fill_n_aux__H3ZPQ211render_data11region_infoZUiZQ211render_data11region_info_X01X11RCX21G12__false_type_X01

- Address: `0x0010EC40`
- Size: `0x54` (84 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.9091 | 0.0 | `candidate.cpp` |
| 2 | different | 19.3182 | 0.0 | `candidate.cpp` |
| 3 | different | 50.0 | 19.0476 | `candidate.cpp` |
| 4 | different | 28.125 | 0.0 | `candidate.cpp` |
| 5 | different | 55.6818 | 40.9091 | `candidate.cpp` |

### Attempt 1 notes

No released g++-2 header copy is available. Reconstructed the eligible uninitialized_fill_n loop from the region_info layout, but aggregate assignment emitted 64-bit block copies and an 88-byte body.

### Attempt 2 notes

Reconstructed placement new plus source-faithful rectf and region_info copy constructors. The compiler emitted a different 88-byte copy schedule.

### Attempt 3 notes

Expanded the target copy into explicit scalar pointer and float assignments with the released null placement check. This reached 80 bytes but retained a different loop setup.

### Attempt 4 notes

Precomputed source float-pair pointers and used an explicit counted do-loop to mirror target registers. The compiler expanded the body to 96 bytes.

### Attempt 5 notes

Removed the source pointer locals while keeping a guarded counted do-loop and scalar field copies. It produced 88 bytes and did not reproduce the target setup/schedule.

## Outcome

Compiler-generated region_info uninitialized_fill_n did not match after five reconstructed g++-2 loop and copy forms.
