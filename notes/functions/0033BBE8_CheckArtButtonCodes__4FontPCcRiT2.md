# CheckArtButtonCodes__4FontPCcRiT2

- Address: `0x0033BBE8`
- Size: `0xBC` (188 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.8235 | 5.8824 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Inlining the source-faithful string accessors reproduces the released button
code scan exactly.

## Outcome

Released art-button string scan, length update, and button index selection reproduce the target exactly.
