# set_scale__17text_block_widgetf

- Address: `0x003413B0`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.3333 | 0.0 | `candidate.cpp` |
| 2 | different | 81.6667 | 53.3333 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 90.0 | 86.6667 | `candidate.cpp` |
| 5 | different | 71.6667 | 63.3333 | `candidate.cpp` |

## Outcome

Deferred text_block_widget::set_scale after five source-level attempts; the released block scale write, child iteration, virtual scale dispatch, and iterator spill reproduced, but the target load-hazard nop and iterator scheduling did not.
