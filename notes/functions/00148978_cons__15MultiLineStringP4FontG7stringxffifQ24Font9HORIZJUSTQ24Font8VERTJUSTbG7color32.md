# cons__15MultiLineStringP4FontG7stringxffifQ24Font9HORIZJUSTQ24Font8VERTJUSTbG7color32

- Address: `0x00148978`
- Size: `0x148` (328 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 85.3659 | 57.5 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released MultiLineString::cons body with an initial released declaration context. The candidate compile failed. This attempt is preserved honestly; the lane subsequently exceeded the one-attempt first-pass cap.

### Attempt 2 notes

Attempt 2 preserved the exact released body with a revised declaration context, but emitted a differently mangled symbol ending in `bUi`; score 0. This attempt is preserved honestly.

### Attempt 3 notes

Attempt 3 preserved the exact released body with the final declaration context. It emitted the target symbol and differed at 85.3659% bytes (280/328) and 57.5% instructions (46/80). No further attempt was made.

## Outcome

Three exact-body declaration-context attempts were preserved; the best emitted target symbol differed at 85.3659%.
