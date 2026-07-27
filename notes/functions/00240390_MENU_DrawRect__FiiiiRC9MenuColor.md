# MENU_DrawRect__FiiiiRC9MenuColor

- Address: `0x00240390`
- Size: `0xF8` (248 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.4355 | 14.5161 | `candidate.cpp` |

### Attempt 1 notes

Exact released `MENU_DrawRect` body with the authentic aligned `nglQuad`, `MenuColor`, PS2 `NGL_RGBA32` macro, and NGL calls. It emitted the same operations in 232 bytes, while the target retains four conversion-scheduling nops and a different color-pack instruction order for 248 bytes.

## Outcome

Exact released menu rectangle differed in coordinate conversion and color-pack scheduling.
