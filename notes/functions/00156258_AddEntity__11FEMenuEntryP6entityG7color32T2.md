# AddEntity__11FEMenuEntryP6entityG7color32T2

- Address: `0x00156258`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.6923 | 23.0769 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an access, aggregate-copy, bool-normalization, or scheduling mismatch.

### Attempt 2 notes

Minimal layouts preserve the menu entry fields and the entity render-color destination at offset 0x1d8.

## Outcome

The released `FEMenuEntry::AddEntity` implementation matched exactly.
