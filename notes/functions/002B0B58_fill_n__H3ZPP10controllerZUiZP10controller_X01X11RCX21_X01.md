# fill_n__H3ZPP10controllerZUiZP10controller_X01X11RCX21_X01

- Address: `0x002B0B58`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | different | 23.0769 | 0.0 | `candidate.cpp` |
| 3 | different | 86.3636 | 45.4545 | `candidate.cpp` |

### Attempt 1 notes

The canonical pointer fill moves the increment before the backedge.

### Attempt 2 notes

The post-decrement count form expands to 52 bytes.

### Attempt 3 notes

An indexed loop retains the same branch-delay scheduling mismatch.

## Outcome

The prior match used hand-written assembly. It was removed and the generated
fill loop was deferred.
