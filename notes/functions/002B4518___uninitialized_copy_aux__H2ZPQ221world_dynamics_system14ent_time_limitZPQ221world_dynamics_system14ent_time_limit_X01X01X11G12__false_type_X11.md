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

The canonical old-STL placement-copy loop uses the shared
`world_dynamics_system::ent_time_limit` declaration.

## Outcome

The integer stand-in was removed; the released helper remains exact.
