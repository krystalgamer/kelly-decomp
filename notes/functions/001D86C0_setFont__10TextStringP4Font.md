# setFont__10TextStringP4Font

- Address: `0x001D86C0`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline body assigns `font = f`. Placing `font` at offset `0x0` reproduced the target delay-slot store.

## Outcome

The released inline `TextString::setFont` assigns the pointer directly. Modeling `font` at offset `0x0` matched exactly on the first attempt and preserved the byte-identical ROM.
