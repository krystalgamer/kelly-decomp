# cameraman_ai__14surfing_objectR8vector3dT1f

- Address: `0x00207478`
- Size: `0xE0` (224 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate-1-exact.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate-2-exact-root-include.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate-3-shared-declarations.cpp` |
| 4 | different | 62.0536 | 44.6429 | `candidate-4-shared-declarations.cpp` |
| 5 | different | 98.2143 | 96.4286 | `candidate-5-shared-color.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released cameraman AI body and known layouts reached 98.2143%, but the authentic get_light_set virtual slot depends on the full entity hierarchy; a local class or vtable projection would violate shared-header consolidation.
