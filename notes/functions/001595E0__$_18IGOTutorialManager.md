# _$_18IGOTutorialManager

- Address: `0x001595E0`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.0882 | 79.4118 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released tutorial-manager teardown matched after blocking the final EventRecipient tail call while preserving text and instruction-widget destruction.

## Outcome

The released tutorial-manager destructor matched exactly on the second attempt.
