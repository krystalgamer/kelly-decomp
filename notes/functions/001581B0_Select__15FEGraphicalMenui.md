# Select__15FEGraphicalMenui

- Address: `0x001581B0`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-submenu branch uses the shared menu hierarchy. The empty
base fallback emits no target instructions in this build.

## Outcome

The manual menu/vtable layout was removed; the released forwarding remains
exact.
