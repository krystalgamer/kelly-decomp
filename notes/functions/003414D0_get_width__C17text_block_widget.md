# get_width__C17text_block_widget

- Address: `0x003414D0`
- Size: `0x7C` (124 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.7742 | 64.5161 | `candidate.cpp` |
| 2 | different | 71.7742 | 64.5161 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released widest-child scan matched after pinning the running width and list header/iterator to the target callee-saved registers.

## Outcome

The released text-block width query matched exactly on the third attempt.
