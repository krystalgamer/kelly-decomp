# fill_n__H3ZPUsZUiZUs_X01X11RCX21_X01

- Address: `0x0011FF50`
- Size: `0x2C` (44 bytes)
- Object: `game/files_anim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The generated ushort fill semantics are preserved. Reviewed asm retains the generated nops and encodes the two-byte pointer increment in the branch delay slot.

## Outcome

Matched generated unsigned-short fill loop.
