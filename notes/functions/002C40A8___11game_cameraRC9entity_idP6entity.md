# __11game_cameraRC9entity_idP6entity

- Address: `0x002C40A8`
- Size: `0x108` (264 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released `game_camera::game_camera` constructor body and initializer list from `kelly-slaters-pro-surfer/KS/SRC/camera.cpp:112-122`, with only layout-critical declarations and symbol bindings required for the isolated candidate. Tested exactly once with no variants.

## Outcome

The exact released game-camera constructor failed the isolated compile because its released vtable symbol was multiply defined; the sole attempt scored 0%.
