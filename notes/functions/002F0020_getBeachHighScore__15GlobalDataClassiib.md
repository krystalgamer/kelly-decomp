# getBeachHighScore__15GlobalDataClassiib

- Address: `0x002F0020`
- Size: `0xF8` (248 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.7903 | 11.2903 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Used the released body verbatim from `kelly-slaters-pro-surfer/KS/SRC/ks/GlobalData.cpp:190-196`.
- Used the released `HighScoreData`, `BeachData` arrays, and `NUM_ROWS = 10` declarations from `GlobalData.h:13-18,38-43,113` and `HighScoreFrontEnd.h:18`, with only the preceding class storage narrowed to its authentic `0x75C` beach-array offset.
- Result: **different** — byte score 48.7903%, instruction score 11.2903%. No second attempt was made.

## Outcome

Exact released beach high-score source differed from the target; preserved attempt 1 for the later Sol pass.
