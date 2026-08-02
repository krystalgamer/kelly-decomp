# split_xform__18collision_geometryRC2poN21ii

- Address: `0x002FF2C8`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `split-1.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `split-2.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `split-3.cpp` |

## Outcome

Three native declarations emitted the current compiler T1T1 mangling instead of the target N21 form; the asm-named wrapper was removed.
