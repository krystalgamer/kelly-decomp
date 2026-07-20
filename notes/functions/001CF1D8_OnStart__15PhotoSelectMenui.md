# OnStart__15PhotoSelectMenui

- Address: `0x001CF1D8`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC menu vtable layout preserves the released virtual `Select(highlighted->entry_num)` call through slot 0x128.

## Outcome

The released `PhotoSelectMenu::OnStart` handler matched exactly on the first attempt.
