# Update__18TrickTypeMenuClassf

- Address: `0x001AC7B8`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

The matching-only branch barriers and abbreviated virtual layout were removed.
The shared released body tail-calls both branch targets, so this wrapper was
deferred rather than retaining compiler-control scaffolding.
