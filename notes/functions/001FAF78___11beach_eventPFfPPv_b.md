# __11beach_eventPFfPPv_b

- Address: `0x001FAF78`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.8333 | 86.6667 | `candidate.cpp` |
| 2 | different | 88.3333 | 86.6667 | `candidate.cpp` |
| 3 | different | 88.3333 | 86.6667 | `candidate.cpp` |
| 4 | different | 88.3333 | 86.6667 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred beach_event constructor after five source-level attempts; the released base construction, vtable setup, fields, and size reproduced, but the target prologue and base-call argument scheduling did not.
