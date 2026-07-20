# __4MenuP4Menu

- Address: `0x0023E218`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor matched exactly with the seven menu fields at offsets 0x0-0x18 and the old-ABI vtable pointer at offset 0x1c.

## Outcome

The released Menu parent constructor matched exactly on the first attempt.
