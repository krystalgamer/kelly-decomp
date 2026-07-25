# OnTriangle__14GoalsMenuClassi

- Address: `0x001B1C20`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.8333 | 63.8889 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released goals-menu back action matched after preventing the event-store and base-call tail scheduling from crossing their source boundaries.

## Outcome

The released goals-menu triangle handler matched exactly on the second attempt.
