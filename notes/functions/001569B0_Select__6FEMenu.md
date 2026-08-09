# Select__6FEMenu

- Address: `0x001569B0`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released menu-system virtual `Select` dispatch uses the shared `FEMenu`
and `FEMenuSystem` hierarchy.

## Outcome

The manual menu, entry, and vtable layouts were removed.
