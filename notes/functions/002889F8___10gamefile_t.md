# __10gamefile_t

- Address: `0x002889F8`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/gamefile.cpp`
- Reference source: `KS/SRC/gamefile.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.3148 | 18.5185 | `candidate.cpp` |
| 2 | different | 53.125 | 96.6667 | `candidate.cpp` |
| 3 | different | 57.8125 | 96.6667 | `candidate.cpp` |
| 4 | different | 17.1875 | 6.6667 | `candidate.cpp` |
| 5 | different | 25.0 | 0.0 | `candidate.cpp` |

## Outcome

Deferred the released gamefile constructor after five source-level attempts; automatic member construction matched semantically, but the target preserved two loop-latch nops absent from standalone output.
