# setVJustify__10TextStringQ24Font8VERTJUST

- Address: `0x00148278`
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

The vertical-justification enum is stored at `TextString` offset `0x1C`.
The nested `Font` enum preserved the target signature and store.

## Outcome

The vertical-justification enum is stored at TextString offset 0x1C. Modeling the nested Font enum preserved the target signature, matched immediately, and kept the full ROM exact.
