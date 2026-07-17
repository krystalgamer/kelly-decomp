# SetCurrentGap__18IGOTutorialManageri

- Address: `0x0015A0B8`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The tutorial manager's current gap is stored at offset `0x44`. Assigning the
integer matched the target store.

## Outcome

The tutorial manager current-gap field is stored at offset 0x44. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
