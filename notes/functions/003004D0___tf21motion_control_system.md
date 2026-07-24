# __tf21motion_control_system

- Address: `0x003004D0`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/mcs.h`
- Reference source: `KS/SRC/mcs.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred motion_control_system RTTI generation after five source-level attempts; the released motion_object inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
