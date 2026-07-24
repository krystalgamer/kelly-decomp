# set_min_detail__12conglomeratei

- Address: `0x003071A0`
- Size: `0x78` (120 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.3333 | 56.6667 | `candidate.cpp` |
| 2 | different | 80.8333 | 63.3333 | `candidate.cpp` |
| 3 | different | 86.6667 | 80.0 | `candidate.cpp` |
| 4 | different | 85.0 | 76.6667 | `candidate.cpp` |
| 5 | different | 86.6667 | 80.0 | `candidate.cpp` |

## Outcome

Deferred conglomerate::set_min_detail after five source-level attempts; the released base call, member iteration, virtual dispatch, and offsets reproduced at 86.7%, but the target callee-save and loop-register scheduling did not.
