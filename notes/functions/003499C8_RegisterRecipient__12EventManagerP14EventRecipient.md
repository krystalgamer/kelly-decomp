# RegisterRecipient__12EventManagerP14EventRecipient

- Address: `0x003499C8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_vsim`
- Debug source: `ks/eventmanager.cpp`
- Reference source: `KS/SRC/ks/eventmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 2 | different | 98.913 | 95.6522 | `candidate.cpp` |
| 3 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 4 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 5 | different | 91.3043 | 91.3043 | `candidate.cpp` |

## Outcome

Released event recipient registration reached 22/23 instructions and 98.91%, but the RA restore remained one slot later after five control/barrier candidates.
