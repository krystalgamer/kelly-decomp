# setButtonScale__10TextStringf

- Address: `0x001D86C8`
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

The released inline body assigns `button_scale = bs`. The target field offset is `0x34`.

## Outcome

The released inline button-scale setter with `button_scale` at offset `0x34` matched exactly on the first attempt and preserved the byte-identical ROM.
