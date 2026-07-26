# OnDown__12MainFrontEndi

- Address: `0x0017F900`
- Size: `0xDC` (220 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.6364 | 40.0 | `candidate-round1.cpp` |
| 2 | different | 52.0161 | 35.4839 | `candidate-round2.cpp` |
| 3 | different | 49.1071 | 28.5714 | `candidate-round3.cpp` |
| 4 | different | 91.3636 | 72.7273 | `candidate-round4.cpp` |
| 5 | different | 90.9091 | 85.4545 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released MainFrontEnd::OnDown body with the shared frontend declarations. EE GCC merged all three identical virtual dispatches and tail-called playEvent, producing 196 bytes.

### Attempt 2 notes

Added instruction-free barriers to separate MultiplayerMenu dispatch and prevent the sound tail call. The compiler separated all three menu calls, expanding the function to 248 bytes.

### Attempt 3 notes

Explicitly shared the Freesurf/Career FEMenu dispatch while keeping Multiplayer separate. The candidate was 224 bytes because the compiler placed the separate block before the shared block and needed one extra branch.

### Attempt 4 notes

Moved the Multiplayer label after the shared dispatch and retained a tail-call barrier. This recovered the exact 220-byte control-flow layout; only highlighted/entry register allocation differed, yielding the best byte score.

### Attempt 5 notes

Bound highlighted and entry values to the target registers and forced a post-dispatch reload with an instruction-free memory constraint. Instruction agreement improved, but several branch operands and reload registers still differed.

## Outcome

Deferred after five source-level attempts. Source-level control-flow restructuring reproduced the exact 220-byte dispatch layout, but the target highlighted-entry register allocation remained different.
