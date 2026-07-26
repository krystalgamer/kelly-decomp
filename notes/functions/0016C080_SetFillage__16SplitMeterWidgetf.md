# SetFillage__16SplitMeterWidgetf

- Address: `0x0016C080`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.1296 | 96.2963 | `candidate.cpp` |
| 2 | different | 93.9815 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Exact released `SetFillage` body with source-faithful `color`, `SpecialMeter`,
`PanelQuad`, `IGOWidget`, and `SplitMeterWidget` declarations. The emitted
function had the correct 216-byte shape and all logic/order matched, but the
abbreviated `PanelQuad` declaration placed its GCC2 vptr at `0x1C` rather than
the released `0x194`. Both virtual `SetColor(color)` dispatches therefore used
`lw ..., 0x1C(a2)` instead of `lw ..., 0x194(a2)`.

Score: 92.1296% bytes, 96.2963% instructions.

### Attempt 2 notes

Kept the exact released body and expanded the source-faithful `PanelQuad`
layout replica to `0x194` bytes before its GCC2 vptr. This corrected both
virtual dispatch loads and produced a 54/54 instruction match. Raw bytes still
differed only at unresolved relocations for `CanRegionLink` and the two static
colors, whose released addresses are required by this scratch scorer.

Score: 93.9815% bytes, 100% instructions.

### Attempt 3 notes

Retained attempt 2 unchanged at source level and supplied the released symbol
equates: `CanRegionLink__C12SpecialMeter = 0x002510F0`,
`COLOR_NORMAL = 0x003E76A0`, and `COLOR_SPECIAL = 0x003E76B0`. This resolved
the remaining call and static-data relocation bytes without changing the
released function body.

Score: 100% bytes, 100% instructions; matched at 216 bytes.

### Attempt 4 notes

Re-tested the exact released body against the consolidated source-faithful `PanelQuad`, `SpecialMeter`, and `SplitMeterWidget` declarations used for integration. The isolated function remained byte-exact.

## Outcome

Matched the exact released split-meter fill update using consolidated source-faithful meter, panel quad, and color declarations.
