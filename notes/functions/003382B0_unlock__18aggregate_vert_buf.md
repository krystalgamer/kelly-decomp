# unlock__18aggregate_vert_buf

- Address: `0x003382B0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/aggvertbuf.cpp`
- Reference source: `KS/SRC/aggvertbuf.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released wrapper unlocks the vertex buffer at 0x10 and clears the
word-sized locked flag at 0x18.

Re-evaluating the identical first candidate after the exact wrapper-save compiler fixup now produces an exact match; this infrastructure recheck does not consume a second source attempt.

## Outcome

The released aggregate_vert_buf::unlock wrapper matched exactly after correcting the isolated compiler save order.
