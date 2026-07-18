# SetBehaviorNF__12FloatingTextff

- Address: `0x0014CB90`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets `non_floating_behavior` at `0xDC` and writes `real_x`/`real_y` at `0xD4`/`0xD8`.

## Outcome

The released `FloatingText::SetBehaviorNF` assignments matched exactly on the first attempt.
