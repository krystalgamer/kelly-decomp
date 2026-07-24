# set_layer__11text_widgetQ26widget11rhw_layer_e

- Address: `0x00340848`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.9412 | 70.5882 | `candidate.cpp` |
| 2 | different | 77.9412 | 70.5882 | `candidate.cpp` |
| 3 | different | 82.3529 | 76.4706 | `candidate.cpp` |
| 4 | different | 77.9412 | 70.5882 | `candidate.cpp` |
| 5 | different | 27.1429 | 14.2857 | `candidate.cpp` |

## Outcome

Deferred the released text-widget layer setup after five source-level attempts; layer counter initialization, RHW allocation, PC-Z conversion, and layer restoration were reconstructed, but global/prologue scheduling remained different.
