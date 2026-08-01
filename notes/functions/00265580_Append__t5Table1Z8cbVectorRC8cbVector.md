# Append__t5Table1Z8cbVectorRC8cbVector

- Address: `0x00265580`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_table.h`
- Reference source: `KS/SRC/ks/dxt1_table.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.75 | 12.5 | `append-cb-1.cpp` |
| 2 | different | 44.4444 | 33.3333 | `append-cb-2.cpp` |
| 3 | different | 33.3333 | 11.1111 | `append-cb-3.cpp` |

## Outcome

Three native cbVector table append forms generated different register scheduling; the hand-written extern-C/register-bound wrapper was removed.
