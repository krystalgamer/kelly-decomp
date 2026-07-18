# __vc__t5Table1Zii

- Address: `0x00265560`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_table.h`
- Reference source: `KS/SRC/ks/dxt1_table.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the released template returns `data[index]`; integer elements are four bytes.

## Outcome

The released `Table<int>::operator[]` address calculation matched exactly on the first attempt.
