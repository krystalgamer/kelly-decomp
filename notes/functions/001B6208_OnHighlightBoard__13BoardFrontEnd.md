# OnHighlightBoard__13BoardFrontEnd

- Address: `0x001B6208`
- Size: `0x1E8` (488 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.7541 | 0.8197 | `candidate.cpp` |

### Attempt 1 notes

# OnHighlightBoard__13BoardFrontEnd

- Address: `0x001B6208`
- Size: `0x1E8` (488 bytes)
- Object: `game/files_frontend`
- Reference: `kelly-slaters-pro-surfer/KS/SRC/ks/BoardFrontEnd.cpp`
- Attempts before first pass: `0`
- Attempt 1: `different`; 484 candidate bytes; byte score `14.7541`; instruction score `0.8197`.

Attempt 1 used exactly the released `OnHighlightBoard` body with minimal self-contained faithful declarations and LF line endings. The target begins by selecting a surfer index from multiplayer state and `g_game_ptr`, behavior absent from the released body, so no retry or variant was attempted.

Citations: `kelly-slaters-pro-surfer/KS/SRC/ks/BoardFrontEnd.cpp:198-231`; `kelly-slaters-pro-surfer/KS/SRC/ks/BoardFrontEnd.h:19-89`; `kelly-slaters-pro-surfer/KS/SRC/ks/boarddata.h:8-27`; `tmp/functions/001B6208_OnHighlightBoard__13BoardFrontEnd/attempt-1/result.json`.

## Outcome

The exact released board-highlight body differed at 14.7541% byte score; no source variant was attempted.
