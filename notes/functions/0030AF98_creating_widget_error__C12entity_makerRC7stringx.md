# creating_widget_error__C12entity_makerRC7stringx

- Address: `0x0030AF98`
- Size: `0xA8` (168 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.6977 | 30.2326 | `candidate.cpp` |
| 2 | different | 19.4444 | 4.4444 | `candidate.cpp` |
| 3 | different | 19.4444 | 4.4444 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 17.7083 | 2.0833 | `candidate.cpp` |

## Outcome

Five released string-concatenation variants reproduced the error path but not temporary-object stack scheduling.
