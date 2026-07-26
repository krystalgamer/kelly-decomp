# Draw__15FEGraphicalMenu

- Address: `0x001580D8`
- Size: `0xD4` (212 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.2727 | 83.6364 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released draw flow and shared menu layout reproduced every instruction through the final panel draw, but GCC converted that last call into a sibling call.

### Attempt 2 notes

The first tail-call barrier spelling was not visible in the isolated candidate context and failed to compile.

### Attempt 3 notes

Used the exact released draw flow with the shared source-faithful menu declaration and a zero-instruction barrier after the final panel draw. This matched byte-exactly.

## Outcome

Matched the exact released graphical-menu draw flow with the shared menu layout and a zero-instruction barrier preventing only the final panel-draw sibling call.
