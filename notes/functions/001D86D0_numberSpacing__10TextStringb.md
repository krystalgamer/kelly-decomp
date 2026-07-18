# numberSpacing__10TextStringb

- Address: `0x001D86D0`
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

The released inline body assigns `even_number_spacing = on`. EE GCC stores this bool as a word at offset `0x20`.

## Outcome

The released number-spacing setter and word-sized EE GCC bool layout at offset `0x20` matched exactly on the first attempt.
