# getZ__10TextString

- Address: `0x001482F0`
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

The text depth value is stored at `TextString` offset `0x14`. Returning that
integer matched the target load.

## Outcome

The text depth value is stored at TextString offset 0x14. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
