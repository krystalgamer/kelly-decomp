# GetPanel__8FrontEnd

- Address: `0x001DADD8`
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

The released inline getter returns `&panel`; the embedded PanelFile begins at offset `0x80`.

## Outcome

The released `FrontEnd::GetPanel` address calculation matched exactly on the first attempt.
