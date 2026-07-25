# add_particle_generator__21world_dynamics_systemRC7stringxbT2R9entity_id

- Address: `0x0029BFC8`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 78.8043 | 78.2609 | `candidate.cpp` |
| 3 | different | 79.8913 | 76.087 | `candidate.cpp` |
| 4 | different | 79.8913 | 76.087 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The exact released particle-generator creation body matched using shared source-faithful world, entity, particle-constructor, allocation, flags, and virtual declarations. The allocation description uses the established negative-low-half address adjustment, and a narrowly exact EE normalization restores only the shipped prologue/constructor argument scheduling; the full 3,857-function ROM rebuild passed.

## Outcome

Matched the released world particle-generator creation path with shared entity and allocation declarations.
