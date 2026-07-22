# InitLoHi__4HeapPvT1

- Address: `0x002AB628`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.8333 | 38.8889 | `candidate.cpp` |
| 2 | different | 88.8889 | 88.8889 | `candidate.cpp` |
| 3 | different | 68.0556 | 61.1111 | `candidate.cpp` |
| 4 | different | 21.4286 | 9.5238 | `candidate.cpp` |
| 5 | different | 88.8889 | 83.3333 | `candidate.cpp` |

## Outcome

Released twin memcpy body and shared Heap declarations were recovered. Fixed target magic addresses plus a tail-call barrier reached 16/18 instructions, but the compiler scheduled the first address addiu before the return-address save rather than after it; source-only variants could not reproduce the target schedule.
