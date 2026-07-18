# CheckLoHi__C4HeapPvT1

- Address: `0x002AB670`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With heap assertions disabled, the released boundary check has no executable body.

## Outcome

The configuration-empty `Heap::CheckLoHi` method matched exactly on the first attempt.
