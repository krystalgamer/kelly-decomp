# SetColor__11FEMenuEntryG7color32

- Address: `0x001DA780`
- Size: `0xC` (12 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released by-value `color32` arrives indirectly, then stores its word into `text->color` at text offset `0x48` through the text pointer at entry offset `0x24`.

## Outcome

The released `FEMenuEntry::SetColor` nested color store matched exactly on the first attempt.
