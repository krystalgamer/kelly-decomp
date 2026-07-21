# UnlockBoard__Q26Career8Location

- Address: `0x0025AEE8`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.1429 | 71.4286 | `candidate.cpp` |
| 2 | different | 82.1429 | 71.4286 | `candidate.cpp` |
| 3 | different | 92.8571 | 85.7143 | `candidate.cpp` |
| 4 | different | 92.8571 | 85.7143 | `candidate.cpp` |
| 5 | different | 92.8571 | 85.7143 | `candidate.cpp` |

### Attempt 1 notes

Used the released global-data call and board flag assignment with the recovered location layout. The operations matched, but EE GCC saved `s0` before `ra` and evaluated the global address before `my_id`.

### Attempt 2 notes

Staged the location ID and global-data pointer as source locals. Optimization restored the same non-matching evaluation and prologue order as attempt one.

### Attempt 3 notes

Fixed the location ID in `a1` with an empty matching barrier. This recovered the target argument-evaluation order; only the reversed `s0`/`ra` save order remained.

### Attempt 4 notes

Also fixed the saved object pointer in `s0` and constrained it with an empty barrier. The compiler retained the same two-instruction prologue mismatch.

### Attempt 5 notes

Used an ABI-named source-level wrapper with fixed `s0` and `a1` values. All body and epilogue instructions matched, but the callee-save stores remained reversed.

## Outcome

Five source-level reconstructions reproduced the board-unlock logic, but the available EE GCC consistently reversed the target ra and s0 prologue stores.
