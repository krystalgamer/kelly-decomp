# setHJustify__10TextStringQ24Font9HORIZJUST

- Address: `0x00148270`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The horizontal-justification enum is stored at `TextString` offset `0x18`.
Modeling the nested `Font` enum preserved the original mangled signature.

## Outcome

The horizontal-justification enum is stored at TextString offset 0x18. Modeling the nested Font enum preserved the mangled signature, matched on the first attempt, and retained the exact ROM checksum.
