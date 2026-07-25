# EndRun__11IGOFrontEnd

- Address: `0x0017A5D0`
- Size: `0xB4` (180 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.7778 | 33.3333 | `candidate.cpp` |
| 2 | different | 51.6304 | 30.4348 | `candidate.cpp` |
| 3 | different | 52.7174 | 34.7826 | `candidate.cpp` |
| 4 | different | 55.0 | 37.7778 | `candidate.cpp` |
| 5 | different | 34.1837 | 16.3265 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used shared FrontEnd, EventRecipient, game, pause-menu, and PhotoFrontEnd declarations; target size matched, but the reconstructed IGO state prefix was four bytes short and the final notification became a sibling call.

### Attempt 2 notes

Adding the established call barrier prevented the sibling call, but a FrontEnd tail field was absorbed by base-class alignment and did not correct the IGO offsets.

### Attempt 3 notes

Using the released game-mode enum and a target-evidenced reserved IGO state word restored all member offsets, leaving the multiplayer comparison and common-pause control flow different.

### Attempt 4 notes

Factoring the repeated multiplayer pause into a shared source path restored target size but materialized a second game-global base and retained different branch inversions.

### Attempt 5 notes

Explicit target-shaped pause labels enlarged the generated control flow. No bespoke per-function class or menu layout was retained.

## Outcome

Deferred IGO end-run handling after five source-level attempts; exact shared declarations restored layout but not the original multiplayer branch and pause scheduling.
