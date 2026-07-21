# lower_bound__t8_Rb_tree5ZiZt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt10_Select1st1Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt4less1ZiZt12my_allocator1ZPQ221world_dynamics_system17surface_type_infoRCi

- Address: `0x002B25E8`
- Size: `0x40` (64 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 48.4375 | 12.5 | `candidate.cpp` |
| 3 | different | 10.0 | 0.0 | `candidate.cpp` |
| 4 | different | 50.0 | 35.2941 | `candidate.cpp` |
| 5 | different | 50.0 | 35.2941 | `candidate.cpp` |

### Attempt 1 notes

The first authentic traversal could not compile because the legacy Windows compiler rejected the generated long scratch path.

### Attempt 2 notes

A short-path test with the natural iterator ABI returned the pointer directly and used the wrong argument registers.

### Attempt 3 notes

Making the iterator nontrivial introduced destructor machinery rather than the target hidden-result ABI.

### Attempt 4 notes

An explicit hidden-result reconstruction matched the traversal semantics but emitted an extra branch in the left/right selection.

### Attempt 5 notes

Expressing the right-child case with continue retained the extra branch layout.

## Outcome

Five source-authentic lower-bound reconstructions could not reproduce the target iterator ABI and branch-likely traversal layout.
