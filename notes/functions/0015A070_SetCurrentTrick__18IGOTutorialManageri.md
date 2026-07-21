# SetCurrentTrick__18IGOTutorialManageri

- Address: `0x0015A070`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body matched on attempt one after replacing per-function guessed layouts with shared source-faithful `EventRecipient`, `stringx`, `SurferTrick`, and `IGOTutorialManager` declarations from their original header structure.

## Outcome

The tutorial manager current-trick update matches directly using the shared original-source declarations.
