# changeScale__10TextStringf

- Address: `0x001D86D8`
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

The released inline body assigns `scale = s`. The target field offset is `0x30`.

## Outcome

The released `TextString::changeScale` assignment with `scale` at offset `0x30` matched exactly on the first attempt.
