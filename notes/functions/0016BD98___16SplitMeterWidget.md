# __16SplitMeterWidget

- Address: `0x0016BD98`
- Size: `0x60` (96 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.4583 | 31.8182 | `candidate.cpp` |
| 2 | different | 85.4167 | 45.4545 | `candidate.cpp` |
| 3 | different | 91.6667 | 54.5455 | `candidate.cpp` |
| 4 | different | 91.6667 | 54.5455 | `candidate.cpp` |
| 5 | different | 50.0 | 45.4545 | `candidate.cpp` |

## Outcome

Released SplitMeterWidget constructor matched all non-nop operations but retained an eight-byte loop scheduling difference after five pointer/count candidates.
