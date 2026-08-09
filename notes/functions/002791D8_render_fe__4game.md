# render_fe__4game

- Address: `0x002791D8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.2727 | 45.4545 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size44-attack-wrapper-core.cpp` |

### Attempt 1 notes

The first source shape exposed a layout, loop-backedge, or sibling-call mismatch.

### Attempt 2 notes

The second attempt either exposed a candidate-generation syntax error or retained the loop branch schedule mismatch.

### Attempt 3 notes

The shared game declaration and a local function pointer preserve `FEDraw`
followed by the normal overlay call.

## Outcome

The compiler barrier and local class were removed.
