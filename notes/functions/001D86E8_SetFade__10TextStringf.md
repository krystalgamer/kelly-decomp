# SetFade__10TextStringf

- Address: `0x001D86E8`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method assigns `fade = 2` at `0x24` and `fade_alpha` at `0x28`.

## Outcome

The released `TextString::SetFade` assignments matched exactly on the first attempt.
