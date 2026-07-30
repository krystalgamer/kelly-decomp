# collide_sphere_three_partition3s__FRC8vector3dfRC10partition3N22R8vector3d

- Address: `0x002E16B0`
- Size: `0x430` (1072 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 170 lane B3

Exact released function body from `kelly-slaters-pro-surfer/KS/SRC/collide.cpp:2064-2132`, using source-faithful `rational_t`, `vector3d`, `hyperplane<vector3d>`, and `partition3` declarations reused from the prior `collide.cpp` candidate. Tested exactly once.

Result: `symbol_missing` (score 0.0). The candidate emitted `collide_sphere_three_partition3s__FRC8vector3dfRC10partition3T2T2R8vector3d` rather than target `collide_sphere_three_partition3s__FRC8vector3dfRC10partition3N22R8vector3d`. No alternate candidate, retry, diff chase, tooling change, build, finalize, integration, commit, or push was performed. No full match manifest was produced.

## Outcome

The exact released three-partition sphere collision candidate emitted a different mangled signature and did not expose the target symbol; no alternate source was attempted.
