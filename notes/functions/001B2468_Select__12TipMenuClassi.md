# Select__12TipMenuClassi

- Address: `0x001B2468`
- Size: `0x6C` (108 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.1852 | 85.1852 | `candidate.cpp` |
| 2 | different | 92.5926 | 92.5926 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the sound manager unpause/play/pause sequence, navigation event destination, and SetTip virtual slot. Fixed event argument scheduling matched on attempt 3.

## Outcome

Matched tip menu selection
