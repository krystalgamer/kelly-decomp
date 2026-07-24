# is_translucent__C12anim_texture

- Address: `0x00339C20`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 25.7353 | 0.0 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 33.5714 | 11.4286 | `candidate.cpp` |
| 5 | different | 47.1429 | 25.7143 | `candidate.cpp` |

## Outcome

Deferred the released animated-texture translucency query after five source-level attempts; punch-through/opaque exclusions, texture translucency, and additive checks were reconstructed, but self-register and field-reload scheduling remained different.
