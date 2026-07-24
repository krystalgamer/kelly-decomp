# SetText__11FEMenuEntryG7stringx

- Address: `0x001DA580`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released inline SetText declaration and reconstructed the by-value stringx ABI, text offset, changeText slot, and argument destruction. It matched on attempt 1.

## Outcome

Matched FE menu entry text setter
