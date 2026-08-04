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

The canonical `FloatingPQ` declaration preserves the four stored coordinates and released reference-assignment order; a C++ symbol binding retains the shipped repeated-argument mangling.

## Outcome

The inline `FloatingPQ::GetPos` accessor matched exactly.
