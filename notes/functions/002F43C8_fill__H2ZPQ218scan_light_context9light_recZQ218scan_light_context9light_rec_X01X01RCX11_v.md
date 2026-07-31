# fill__H2ZPQ218scan_light_context9light_recZQ218scan_light_context9light_rec_X01X01RCX11_v

- Address: `0x002F43C8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reviewed asm removes two isolated post-copy nops while preserving the generated 8-byte fill.

## Outcome

Matched scan-light record fill loop.
