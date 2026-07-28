# collide_sphere_three_partition3s_almost_parallel__FRC8vector3dfRC10partition3N22R8vector3d

- Address: `0x002E1528`
- Size: `0x188` (392 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Exact released function body from `KS/SRC/collide.cpp:2044-2062` with minimal
`rational_t`, `vector3d`, `partition3`, `dot`, and two-plane collision
declarations. The harness reported `symbol_missing`: the candidate emitted
`collide_sphere_three_partition3s_almost_parallel__FRC8vector3dfRC10partition3T2T2R8vector3d`
instead of the target symbol ending in `N22R8vector3d`. Per first-pass policy,
no second candidate or diff chasing was performed.

## Outcome

The exact released near-parallel sphere collision emitted no target symbol; no source variant was attempted.
