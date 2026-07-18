# GetColor__11FEMenuEntry

- Address: `0x001DA8B0`
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

The released accessor loads `text` at entry offset `0x24` and returns its color word at offset `0x48`.

## Outcome

The released `FEMenuEntry::GetColor` nested load matched exactly on the first attempt.
