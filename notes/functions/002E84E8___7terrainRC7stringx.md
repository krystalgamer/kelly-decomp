# __7terrainRC7stringx

- Address: `0x002E84E8`
- Size: `0x178` (376 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/terrain.cpp`
- Reference source: `KS/SRC/terrain.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Result: `compile_failed`
- Score: `0.0`
- Candidate copied the released constructor body from pinned commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`, `KS/SRC/terrain.cpp:95-101`, with released `global.h` and `terrain.h` includes.
- Compilation failed because the compiler could not resolve those relative released-header paths (`compiler.stderr:1-2`).
- No retry was made; the one-candidate FIRST PASS allowance was consumed.

## Outcome

Exact released-source first pass for terrain construction did not match.
