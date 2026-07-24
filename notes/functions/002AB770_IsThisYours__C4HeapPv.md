# IsThisYours__C4HeapPv

- Address: `0x002AB770`
- Size: `0x84` (132 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 15.9091 | 6.0606 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released heap ownership predicate matched after materializing HasMemory as a boolean before the containment and block-header checks.

## Outcome

The released heap ownership predicate matched exactly on the third attempt.
