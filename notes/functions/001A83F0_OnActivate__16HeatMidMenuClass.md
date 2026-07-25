# OnActivate__16HeatMidMenuClass

- Address: `0x001A83F0`
- Size: `0x94` (148 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.7193 | 1.7544 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Used the released activation body. The target omits the obsolete option-disable prefix; preserving Init, old-highlight validation, setHigh(false), and HighlightDefault with target register allocation matched exactly.

## Outcome

Matched heat-mid pause activation
