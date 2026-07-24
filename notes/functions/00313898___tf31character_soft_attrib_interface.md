# __tf31character_soft_attrib_interface

- Address: `0x00313898`
- Size: `0x88` (136 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/soft_attrib_interface.h`
- Reference source: `KS/SRC/soft_attrib_interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1176 | 85.2941 | `candidate.cpp` |
| 2 | different | 16.1765 | 0.0 | `candidate.cpp` |
| 3 | different | 17.8571 | 5.7143 | `candidate.cpp` |
| 4 | different | 78.6765 | 73.5294 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released character soft-attrib-interface RTTI helper after five source-level attempts; entity-interface base and derived RTTI initialization were reconstructed, but generated high-address register materialization remained different.
