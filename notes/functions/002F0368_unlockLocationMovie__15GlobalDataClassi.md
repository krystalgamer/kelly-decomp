# unlockLocationMovie__15GlobalDataClassi

- Address: `0x002F0368`
- Size: `0x94` (148 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.027 | 0.0 | `candidate.cpp` |
| 2 | different | 97.973 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the released inline location flag and reconstructed the binary-version career-mode propagation through frontend state, game mode, and Career::Location::UnlockMovie. Restoring the exact nested type name fixed the call relocation and matched all bytes.

## Outcome

Matched location movie unlock
