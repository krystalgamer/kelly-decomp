# RefreshDisplay__9NamesMenu

- Address: `0x0019FF58`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.7895 | 57.8947 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and extended shared NamesMenu/MemCard layout emitted a sibling call to UpdateMessage and a branch-likely cleanup path, producing 72 bytes.

### Attempt 2 notes

A normalized empty barrier after UpdateMessage prevented the demonstrated sibling-call transformation and selected the exact target branch and epilogue. It emits no target instruction.

## Outcome

Matched the released names menu refresh using the shared SaveLoad layout and a documented final-call barrier.
