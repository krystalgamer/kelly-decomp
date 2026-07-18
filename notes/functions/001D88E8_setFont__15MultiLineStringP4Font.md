# setFont__15MultiLineStringP4Font

- Address: `0x001D88E8`
- Size: `0xC` (12 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override assigns `fonts[0]` at offset `0x58` then `font` at offset `0x0`; EE GCC schedules the first source store into the delay slot.

## Outcome

The released `MultiLineString::setFont` dual pointer assignment matched exactly on the first attempt.
