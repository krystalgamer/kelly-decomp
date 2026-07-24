# UpdateInScene__13BeachFrontEnd

- Address: `0x0018E710`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 6.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released frontend/manager/entity-manager fields, inlined OKtoDrawBeachSelect state checks, offset guard, and SetOffset call. Preventing the final tail call matched on attempt 2.

## Outcome

Matched beach frontend scene update
