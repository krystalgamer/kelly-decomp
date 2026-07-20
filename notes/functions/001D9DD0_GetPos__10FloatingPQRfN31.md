# GetPos__10FloatingPQRfN31

- Address: `0x001D9DD0`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an emitted-symbol or aggregate-copy mismatch.

### Attempt 2 notes

A minimal layout preserves the four stored coordinates and the released reference-assignment order.

## Outcome

The inline `FloatingPQ::GetPos` accessor matched exactly.
