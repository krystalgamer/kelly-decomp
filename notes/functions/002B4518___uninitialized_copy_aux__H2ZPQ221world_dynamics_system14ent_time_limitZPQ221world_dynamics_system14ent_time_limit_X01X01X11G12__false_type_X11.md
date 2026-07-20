# __uninitialized_copy_aux__H2ZPQ221world_dynamics_system14ent_time_limitZPQ221world_dynamics_system14ent_time_limit_X01X01X11G12__false_type_X11

- Address: `0x002B4518`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical old-STL null-guarded placement-copy loop reproduces the target eight-byte `ldl`/`ldr` and `sdl`/`sdr` record transfer exactly.

## Outcome

The released `__uninitialized_copy_aux__H2ZPQ221world_dynamics_system14ent_time_limitZPQ221world_dynamics_system14ent_time_limit_X01X01X11G12__false_type_X11` helper matched exactly on the first attempt.
