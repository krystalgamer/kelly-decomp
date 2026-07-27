# WAVETEX_UnloadTextureAnims__Fv

- Address: `0x0037F128`
- Size: `0x138` (312 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.4744 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released PS2 function body with only forward declarations for `nglTexture` and `nglFileBuf`, pointer globals, and the four called APIs. The candidate emits all 78 target instructions in the exact order; the raw byte score reflects unresolved relocations in the standalone object.

## Outcome

The sole recorded released wave-texture animation unload attempt differed bytewise from the target despite matching instruction opcodes; score was 71.4744%.
