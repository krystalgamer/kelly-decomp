# __11ai_polypath

- Address: `0x00109DA8`
- Size: `0x8C` (140 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath.cpp`
- Reference source: `KS/SRC/ai_polypath.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.1429 | 8.5714 | `candidate.cpp` |
| 2 | different | 17.8571 | 0.0 | `candidate.cpp` |
| 3 | different | 85.0 | 60.0 | `candidate.cpp` |
| 4 | different | 92.1429 | 88.5714 | `candidate.cpp` |
| 5 | different | 76.4286 | 65.7143 | `candidate.cpp` |

## Outcome

Five source-level constructor candidates could not reproduce the generated vector resize branch scheduling; the best source-faithful expansion matched 31/35 instructions (92.14% bytes) but retained four ABI scheduling differences.
