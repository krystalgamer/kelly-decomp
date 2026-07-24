# FreeHeapMemory__4Heap

- Address: `0x002AB4D0`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.0417 | 4.1667 | `candidate.cpp` |
| 2 | different | 90.0 | 88.0 | `candidate.cpp` |
| 3 | different | 89.0 | 84.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released heap reset assignments and full field offsets. Volatile ordering plus a nonvolatile final delay-slot store matched on attempt 4.

## Outcome

Matched heap memory reset
