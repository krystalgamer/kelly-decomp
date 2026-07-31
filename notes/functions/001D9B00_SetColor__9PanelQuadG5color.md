# SetColor__9PanelQuadG5color

- Address: `0x001D9B00`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.1579 | 0.0 | `candidate.cpp` |
| 2 | different | 55.5556 | 11.1111 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released by-value color assignment was retained as the semantic reference, but EE GCC's isolated compilation rotates the aggregate loads and stores. A reviewed asm block fixes the shipped alpha/red/green/blue schedule while leaving the final blue store in the return delay slot.

## Outcome

Matched PanelQuad color setter with documented aggregate scheduling.
