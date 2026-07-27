# getScale__4Fontc

- Address: `0x0033AD18`
- Size: `0xFC` (252 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.8095 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `Font::getScale` switch body with only the authentic `Font::getScale(const char)` declaration. It compiled to the exact target size and matched all 63 instructions, but differed in 3 relocation/immediate bytes: 98.8095% bytes (249/252), 100% instructions. No second candidate was attempted.

## Outcome

Exact released Font getScale source differed from the target bytes; preserved attempt 1 for the later Sol pass.
