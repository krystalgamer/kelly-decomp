# setBack__6FEMenuP6FEMenui

- Address: `0x001DA9A8`
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

The released setter writes `back` at offset `0x54` then `back_num` at `0x58`; scheduling moves the pointer store into the delay slot.

## Outcome

The released `FEMenu::setBack` dual assignment matched exactly on the first attempt.
