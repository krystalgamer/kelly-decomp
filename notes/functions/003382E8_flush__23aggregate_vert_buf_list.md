# flush__23aggregate_vert_buf_list

- Address: `0x003382E8`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/aggvertbuf.cpp`
- Reference source: `KS/SRC/aggvertbuf.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.5 | 55.0 | `candidate.cpp` |
| 2 | different | 67.5 | 55.0 | `candidate.cpp` |
| 3 | different | 95.0 | 90.0 | `candidate.cpp` |
| 4 | different | 67.5 | 55.0 | `candidate.cpp` |
| 5 | different | 23.75 | 10.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released reverse traversal loop with a source-faithful 0x1c aggregate_vert_buf layout. The compiler omitted the target scheduling nop, producing 76 bytes and a 67.5% byte score.

### Attempt 2 notes

Added the matching-only compiler barrier after the released flush call. It emitted no instruction and did not change the loop schedule or score.

### Attempt 3 notes

Expanded the exact released aggregate_vert_buf fields and rewrote the loop with an explicit source-level back edge plus barrier. This reached 95%, but emitted xori/bnez instead of the target nop/beqz pair.

### Attempt 4 notes

Changed the explicit condition to use the target comparison polarity. The optimizer collapsed it back to the original 76-byte loop without the scheduling nop.

### Attempt 5 notes

Tried a source-faithful do-loop form with the matching barrier immediately after the range comparison. The compiler rotated the loop differently and did not match.

## Outcome

Released aggregate_vert_buf_list::flush remained blocked by one scheduler nop after five source-level loop forms.
