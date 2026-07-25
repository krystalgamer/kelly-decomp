# SetInternalVars__12CarveManager

- Address: `0x00244370`
- Size: `0x90` (144 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.9444 | 41.6667 | `candidate.cpp` |
| 2 | different | 98.6111 | 94.4444 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released carve reset matched after scalar vector assignment and a compiler barrier preserving TurnType-before-angle stores.

## Outcome

The released function matched exactly.
