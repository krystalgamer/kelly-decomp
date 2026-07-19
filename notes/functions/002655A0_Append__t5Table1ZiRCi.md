# Append__t5Table1ZiRCi

- Address: `0x002655A0`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_table.h`
- Reference source: `KS/SRC/ks/dxt1_table.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving template-layout wrapper reconstructs the 16-element array and size field at offset 0x40.

## Outcome

The `Table<int>::Append` specialization matched exactly.
