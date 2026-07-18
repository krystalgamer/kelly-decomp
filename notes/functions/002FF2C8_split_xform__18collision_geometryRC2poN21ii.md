# split_xform__18collision_geometryRC2poN21ii

- Address: `0x002FF2C8`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released base overload contains only an assertion, removed in the final build. The compiler emitted repeated `T1` backreferences for the isolated declaration, so a GNU asm label preserves the target's equivalent compact `N21` type-backreference spelling.

## Outcome

The final-build empty three-transform `collision_geometry::split_xform` overload matched on the second attempt using a documented asm-label bridge for the target's old-GCC `N21` type-backreference spelling.
