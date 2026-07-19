# Append__t5Table1Z8cbVectorRC8cbVector

- Address: `0x00265580`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_table.h`
- Reference source: `KS/SRC/ks/dxt1_table.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.75 | 12.5 | `candidate.cpp` |
| 2 | different | 56.25 | 37.5 | `candidate.cpp` |
| 3 | different | 96.875 | 87.5 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The compact postincrement expression stored the element before updating the table size, unlike the target schedule.

### Attempt 2 notes

Separating slot and size updates moved the increment/store too early and formed the destination in a0 rather than a2.

### Attempt 3 notes

Register shaping matched every instruction except the commutative adjusted-base operand order.

### Attempt 4 notes

A symbol-preserving template-layout wrapper reconstructs the 16-element array and size field at offset 0x40.

## Outcome

The `Table<cbVector>::Append` specialization matched exactly.
