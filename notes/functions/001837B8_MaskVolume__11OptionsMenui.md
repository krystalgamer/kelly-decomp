# MaskVolume__11OptionsMenui

- Address: `0x001837B8`
- Size: `0x80` (128 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.625 | 84.375 | `candidate.cpp` |
| 2 | different | 64.8438 | 62.5 | `candidate.cpp` |
| 3 | different | 78.125 | 68.75 | `candidate.cpp` |
| 4 | different | 27.9412 | 17.6471 | `candidate.cpp` |
| 5 | different | 90.625 | 84.375 | `candidate.cpp` |

## Outcome

Deferred the released options volume-mask loop after five source-level attempts; all loop operations matched, but five initial member-base address and save-order instructions differed.
