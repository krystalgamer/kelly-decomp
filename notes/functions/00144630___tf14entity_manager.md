# __tf14entity_manager

- Address: `0x00144630`
- Size: `0x7C` (124 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.5484 | 3.2258 | `candidate.cpp` |
| 2 | different | 28.2258 | 6.4516 | `candidate.cpp` |
| 3 | different | 19.3548 | 3.2258 | `candidate.cpp` |
| 4 | different | 20.9677 | 6.4516 | `candidate.cpp` |
| 5 | different | 18.75 | 3.125 | `candidate.cpp` |

## Outcome

Deferred entity_manager multiple-inheritance RTTI generation after five source-level attempts; the released singleton and entity-map base initialization plus RTTI class descriptor reproduced, but the target global-address register allocation did not.
