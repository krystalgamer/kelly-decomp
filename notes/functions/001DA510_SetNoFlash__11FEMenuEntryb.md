# SetNoFlash__11FEMenuEntryb

- Address: `0x001DA510`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline body assigns `no_flash = value`; EE GCC stores the bool as a word at offset `0x40`.

## Outcome

The released `FEMenuEntry::SetNoFlash` bool setter matched exactly on the first attempt.
