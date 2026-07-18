# Resize__t5Table1Z8cbVectori

- Address: `0x00265550`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_table.h`
- Reference source: `KS/SRC/ks/dxt1_table.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions compiled out, the released template method assigns `size = n` at offset `0x40`.

## Outcome

The released `Table<cbVector>::Resize` specialization matched exactly on the first attempt.
