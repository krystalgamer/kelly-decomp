# fill_n__H3ZPP6entityZUiZP6entity_X01X11RCX21_X01

- Address: `0x00142300`
- Size: `0x2C` (44 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The generated entity-pointer fill semantics are preserved. Reviewed asm retains the generated nops and exact branch-delay pointer increment.

## Outcome

Matched generated entity-pointer fill loop.
