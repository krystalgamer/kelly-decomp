# render__11text_widget

- Address: `0x00340708`
- Size: `0xE4` (228 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 37.2807 | 31.5789 | `candidate.cpp` |
| 3 | different | 37.2807 | 31.5789 | `candidate.cpp` |
| 4 | different | 37.2807 | 31.5789 | `candidate.cpp` |
| 5 | different | 37.2807 | 31.5789 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released text-widget render body emits all 55 non-nop target operations in order, but the shipped function has two additional mtc1-to-cvt pipeline hazard nops that source-level variants cannot recover.
