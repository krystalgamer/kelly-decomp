# fill_n__H3ZPP7ai_goalZUiZP7ai_goal_X01X11RCX21_X01

- Address: `0x00110C28`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released generated pointer fill loop is preserved semantically. Reviewed asm retains the two generated scheduling nops and encodes the backedge pair so the pointer increment occupies the branch delay slot without forbidden `.set noreorder`.

## Outcome

Matched generated AI-goal pointer fill loop.
