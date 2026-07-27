# _$_14hw_texture_mgr

- Address: `0x001E2D50`
- Size: `0x124` (292 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_texturemgr.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_texturemgr.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `released-candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_texturemgr.cpp:45-53; kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_texturemgr.h:97-124; tmp/functions/001E2D50__$_14hw_texture_mgr/attempt-1/compiler.stderr:1-2; tmp/functions/001E2D50__$_14hw_texture_mgr/attempt-1/result.json. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released hardware texture-manager destructor failed the isolated compile because released headers were unavailable; the sole attempt scored 0%.
