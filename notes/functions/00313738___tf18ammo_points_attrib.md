# __tf18ammo_points_attrib

- Address: `0x00313738`
- Size: `0x78` (120 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/character_soft_attribs.h`
- Reference source: `KS/SRC/character_soft_attribs.h`
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

Deferred ammo_points_attrib RTTI generation after five source-level attempts; the released bounded_attribute<int> inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
