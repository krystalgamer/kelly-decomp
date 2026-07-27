# ResetToggles__13CheatCodeMenu

- Address: `0x001D27F8`
- Size: `0xFC` (252 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.3881 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The queue entry was `pending` with zero recorded attempts, and no target scratch existed before preparation. Attempt 1 transcribed the released `CheatCodeMenu::ResetToggles` body exactly and supplied narrow declarations for the authentic two-entry menu layout, `Cheat::isOn`, `TextString::changeText`, global text entries, and linked globals.

The candidate compiled and emitted the requested symbol, but differed: 22.3881% byte score, 0.0% instruction score, 268 candidate bytes versus 252 target bytes. Per FIRST-PASS rules, no second candidate or diff chase was attempted.

## Outcome

Exact released CheatCodeMenu ResetToggles source differed from the target; preserved attempt 1 for the later Sol pass.
