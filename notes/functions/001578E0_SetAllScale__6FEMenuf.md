# SetAllScale__6FEMenuf

- Address: `0x001578E0`
- Size: `0xA4` (164 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 4.5455 | `candidate.cpp` |
| 2 | different | 25.0 | 4.5455 | `candidate.cpp` |
| 3 | different | 95.7317 | 82.9268 | `candidate.cpp` |
| 4 | different | 51.7857 | 38.0952 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released traversal matched after retaining the virtual-table pointer in the ABI register and binding reference outputs without emitted instructions on Sol attempt five.

## Outcome

Matched FEMenu scaling of special entry scales and menu scale fields.
