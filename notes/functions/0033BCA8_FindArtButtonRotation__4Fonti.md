# FindArtButtonRotation__4Fonti

- Address: `0x0033BCA8`
- Size: `0xBC` (188 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.4043 | 100.0 | `candidate.cpp` |
| 2 | different | 4.7872 | 2.1277 | `candidate.cpp` |
| 3 | different | 24.0909 | 12.7273 | `candidate.cpp` |
| 4 | different | 9.5745 | 6.383 | `candidate.cpp` |
| 5 | different | 14.7059 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released switch matched every instruction; only the isolated object
jump-table relocation bytes differed.

### Attempt 5 notes

Alternative branch, computed-goto, factor-table, and ternary forms could not
reproduce the target external jump-table address.

## Outcome

The exact released switch matched all instructions, but five source-level forms could not reproduce the isolated target jump-table relocation bytes without prohibited binary normalization.
