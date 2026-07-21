# Init__15FEGraphicalMenu

- Address: `0x00158090`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.2222 | 88.8889 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released Init body and reconstructed the menu field and virtual dispatch layout.

### Attempt 2 notes

Restored setHigh default-argument behavior after the first diff showed the target passing true in a2.

## Outcome

The released graphical menu initialization matches exactly.
