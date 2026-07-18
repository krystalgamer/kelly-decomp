# SetSpecialColor__11FEMenuEntryG7color32T1

- Address: `0x001561D8`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method writes the two color words at `0x34`/`0x38` and sets `has_special_color` at `0x3C`.

## Outcome

The released `FEMenuEntry::SetSpecialColor` assignments matched exactly on the first attempt.
