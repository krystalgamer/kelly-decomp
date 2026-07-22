# Emit1ColorBlock__9ImageDXTCPUsG9DXT1Color

- Address: `0x00264348`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_imagedxt1.cpp`
- Reference source: `KS/SRC/ks/dxt1_imagedxt1.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and anonymous-struct union declaration were attempted first, but this isolated old compiler mode rejected the anonymous class member syntax.

### Attempt 2 notes

The shared DXT1Color declaration was normalized to four released-order byte members with the same layout; the released Emit1ColorBlock body then matched exactly.

## Outcome

Matched exactly with the released body after a declaration-only compatibility normalization that preserves DXT1Color layout and member spelling.
