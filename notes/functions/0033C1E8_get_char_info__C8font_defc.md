# get_char_info__C8font_defc

- Address: `0x0033C1E8`
- Size: `0x18` (24 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor sign-extends the character, multiplies by 24, and indexes the character-info array.

## Outcome

The released `font_def::get_char_info` address calculation matched exactly on the first attempt.
