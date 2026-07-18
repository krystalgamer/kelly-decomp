# SetBehavior__12FloatingTextb

- Address: `0x001D91F8`
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

The released inline body assigns `non_floating_behavior = nfb` at offset `0xDC`.

## Outcome

The released `FloatingText::SetBehavior` bool setter matched exactly on the first attempt.
