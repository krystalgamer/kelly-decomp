# __uninitialized_fill_n_aux__H3ZPQ218scan_light_context9light_recZUiZQ218scan_light_context9light_rec_X01X11RCX21G12__false_type_X01

- Address: `0x002F43F8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical old-STL null-guarded placement-fill loop reproduces the target 8-byte `ldl`/`ldr` and `sdl`/`sdr` record copy exactly.

## Outcome

The released `__uninitialized_fill_n_aux__H3ZPQ218scan_light_context9light_recZUiZQ218scan_light_context9light_rec_X01X11RCX21G12__false_type_X01` helper matched exactly on the first attempt.
