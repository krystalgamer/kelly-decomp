# OnLeft__17TrickBookFrontEndi

- Address: `0x00196818`
- Size: `0xFC` (252 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue row was `pending` with zero attempts; no address scratch existed (0 files), and the tracked tree was clean.
- Used the released `TrickBookFrontEnd::OnLeft` body verbatim from `TrickBookFrontEnd.cpp:210-222`, with authentic `TrickBookFrontEnd`, `FEMenu`/`FEMultiMenu`, `FEMenuEntry`, and `PanelQuad::TurnOn` declarations.
- Result: **compile_failed** — `FEPanel_shared.h` redefined `PanelFile` already supplied by `FEMenu_shared.h`; score 0%. Exactly one candidate was tested; no second attempt or diff chasing was performed.

## Outcome

Exact released TrickBook OnLeft source did not compile with the isolated declarations; preserved attempt 1 for the later Sol pass.
