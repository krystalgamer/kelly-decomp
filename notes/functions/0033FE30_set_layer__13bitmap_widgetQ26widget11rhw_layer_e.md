# set_layer__13bitmap_widgetQ26widget11rhw_layer_e

- Address: `0x0033FE30`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.0882 | 5.8824 | `candidate.cpp` |
| 2 | different | 77.9412 | 70.5882 | `candidate.cpp` |
| 3 | different | 77.9412 | 70.5882 | `candidate.cpp` |
| 4 | different | 77.9412 | 70.5882 | `candidate.cpp` |
| 5 | different | 27.1429 | 14.2857 | `candidate.cpp` |

## Outcome

Deferred the released bitmap-widget layer setup after five source-level attempts; layer counter initialization, RHW allocation, PC-Z conversion, and layer restoration were reconstructed, but global/prologue scheduling remained different.
