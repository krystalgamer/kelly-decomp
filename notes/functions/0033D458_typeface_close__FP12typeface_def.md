# typeface_close__FP12typeface_def

- Address: `0x0033D458`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.5882 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Attempt one used the released body but abbreviated list without its allocator template. Restoring my_allocator produced the exact released remove overload and matched.

## Outcome

The released typeface close helper matches its user-count guard, list removal, and deletion.
