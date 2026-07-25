# DispatchEvent__12EventManager5EVENTii

- Address: `0x00349AB0`
- Size: `0xA4` (164 bytes)
- Object: `game/files_vsim`
- Debug source: `ks/eventmanager.cpp`
- Reference source: `KS/SRC/ks/eventmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.1905 | 23.8095 | `candidate.cpp` |
| 2 | different | 85.3659 | 73.1707 | `candidate.cpp` |
| 3 | different | 89.0244 | 82.9268 | `candidate.cpp` |
| 4 | different | 87.8049 | 78.0488 | `candidate.cpp` |
| 5 | different | 90.2439 | 87.8049 | `candidate.cpp` |

## Outcome

Five released event-dispatch variants reproduced the recipient loop; the best differed only in prologue scheduling.
