# GetNumberSpacing__C10TextString

- Address: `0x001D8738`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline getter returns the word-sized `even_number_spacing` bool at offset `0x20`.

## Outcome

The released const number-spacing getter and EE GCC bool layout matched exactly on the first attempt.
