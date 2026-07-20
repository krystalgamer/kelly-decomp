# fill_n__H3ZPP20morphable_item_rangeZUiZP20morphable_item_range_X01X11RCX21_X01

- Address: `0x002AF8C0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 3 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 4 | different | 23.0769 | 0.0 | `candidate.cpp` |
| 5 | different | 18.75 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The straightforward while loop advanced the pointer before the target branch delay slot.

### Attempt 2 notes

The canonical for loop retained the same isolated pointer-increment schedule.

### Attempt 3 notes

A zero-instruction scheduling barrier did not move the pointer increment into the target delay slot.

### Attempt 4 notes

The postincrement loop changed the control-flow shape and did not match the target.

### Attempt 5 notes

The explicit final-iteration control flow still did not reproduce the target backedge schedule; the five-attempt limit is exhausted.

## Outcome

Five source loop spellings could not reproduce the target pointer increment in the branch delay slot; best byte score was 86.3636%.
