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
| 1 | matched | 100.0 | 100.0 | `size44-utility-wrapper-core.cpp` |

### Attempt 1 notes

The shared aggregate and refptr declarations unlock the vertex buffer at
0x10 and clear the word-sized locked flag at 0x18.

Re-evaluating the identical first candidate after the exact wrapper-save compiler fixup now produces an exact match; this infrastructure recheck does not consume a second source attempt.

## Outcome

The local aggregate layout was removed.
