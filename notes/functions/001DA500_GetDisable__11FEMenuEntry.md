# GetDisable__11FEMenuEntry

- Address: `0x001DA500`
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

The released inline getter returns the word-sized `disabled` flag from offset `0x14`.

## Outcome

The released `FEMenuEntry::GetDisable` bool getter matched exactly on the first attempt.
