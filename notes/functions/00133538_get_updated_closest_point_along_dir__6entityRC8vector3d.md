# get_updated_closest_point_along_dir__6entityRC8vector3d

- Address: `0x00133538`
- Size: `0x88` (136 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 74.2647 | 61.7647 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 22.2973 | 8.1081 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 91.1765 | 88.2353 | `candidate.cpp` |

## Outcome

Deferred the released updated closest-point aggregate return after five source-level attempts; both virtual collision-geometry calls and the vector result copy were reconstructed, but hidden-output register allocation and copy scheduling remained different.
