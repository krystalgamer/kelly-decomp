# MakeActive__12MainFrontEndP6FEMenub

- Address: `0x001802F8`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.1667 | 73.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released Options special case, active/options offsets, setPQMain virtual slot/default arguments, and FEMenu MakeActive call. Preventing the base tail call matched on attempt 2.

## Outcome

Matched main frontend menu activation
