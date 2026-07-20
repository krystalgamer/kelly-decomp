# fill_n__H3ZPiZUiZi_X01X11RCX21_X01

- Address: `0x002FA938`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `shape-1.cpp` |
| 2 | different | 86.3636 | 45.4545 | `shape-2.cpp` |
| 3 | different | 86.3636 | 45.4545 | `shape-3.cpp` |
| 4 | different | 23.0769 | 0.0 | `shape-4.cpp` |
| 5 | different | 18.75 | 0.0 | `shape-5.cpp` |

### Attempt 1 notes

The canonical while loop reproduced the load, decrement, store, branch, and return, but EE GCC moved the pointer increment before the backedge instead of placing it in the target branch delay slot. Best byte score: 86.3636%.

### Attempt 2 notes

The equivalent for loop produced the same 44-byte candidate and retained the pointer increment before the backedge rather than in its delay slot.

### Attempt 3 notes

An empty scheduling barrier between the decrement and pointer increment did not change the emitted loop; the backedge delay-slot mismatch remained.

### Attempt 4 notes

The post-increment spelling changed the loop to 52 bytes and no longer preserved the target control-flow or instruction schedule.

### Attempt 5 notes

An explicit goto loop changed the function to 48 bytes and did not reproduce the target branch/delay-slot layout.

## Outcome

Five source loop spellings could not reproduce the target pointer increment in the branch delay slot; best byte score was 86.3636%.
