# addEvent__18SoundScriptManager9EventTypefP6entity

- Address: `0x0031C580`
- Size: `0xA4` (164 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.1395 | 16.2791 | `candidate.cpp` |
| 2 | different | 37.2093 | 23.2558 | `candidate.cpp` |
| 3 | different | 98.1707 | 92.6829 | `candidate.cpp` |
| 4 | different | 91.4634 | 90.2439 | `candidate.cpp` |
| 5 | different | 30.5556 | 22.2222 | `candidate.cpp` |

## Outcome

Five released sound-event variants reproduced behavior; the best differed only around loop initialization scheduling.
