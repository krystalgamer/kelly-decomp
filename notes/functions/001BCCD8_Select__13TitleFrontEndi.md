# Select__13TitleFrontEndi

- Address: `0x001BCCD8`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.913 | 95.6522 | `candidate.cpp` |
| 2 | different | 98.913 | 95.6522 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The shipped selection path matched using shared source-faithful TitleFrontEnd, FEManager loading state, sound-script, and FEMenu declarations. The built FEMenu vtable has one retained source-version slot before `Select`; modeling it once in the shared header produced the exact virtual dispatch.

## Outcome

Matched the shipped title-screen selection flow with shared front-end, manager, and sound declarations.
