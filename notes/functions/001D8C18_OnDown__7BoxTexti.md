# OnDown__7BoxTexti

- Address: `0x001D8C18`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the released virtual `scroll(false, 1)` call through slot 0x140.

## Outcome

The released `BoxText::OnDown` handler matched exactly on the first attempt.
