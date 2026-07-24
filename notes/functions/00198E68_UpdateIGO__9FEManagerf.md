# UpdateIGO__9FEManagerf

- Address: `0x00198E68`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.1071 | 96.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the IGO enabled offset, IGO/pause menu pointers, and both update virtual slots. Correcting the large manager offset matched on attempt 2.

## Outcome

Matched frontend IGO update
