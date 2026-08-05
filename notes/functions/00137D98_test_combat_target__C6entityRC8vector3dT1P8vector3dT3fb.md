# test_combat_target__C6entityRC8vector3dT1P8vector3dT3fb

- Address: `0x00137D98`
- Size: `0x28` (40 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-entity-core.cpp` |

### Attempt 1 notes

The canonical `entity` method directly forwards the complete collision query and naturally retains the return-value call frame.

## Outcome

The released `entity::test_combat_target` wrapper matched exactly.
