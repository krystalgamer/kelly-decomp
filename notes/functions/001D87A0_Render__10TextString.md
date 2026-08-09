# Render__10TextString

- Address: `0x001D87A0`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released no-argument `Render` wrapper uses the shared text hierarchy and
calls the text overload directly.

## Outcome

The manual object/vtable layout was removed; the released wrapper remains
exact.
