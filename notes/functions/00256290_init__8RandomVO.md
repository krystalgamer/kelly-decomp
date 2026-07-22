# init__8RandomVO

- Address: `0x00256290`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/VOEngine.cpp`
- Reference source: `KS/SRC/ks/VOEngine.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.2174 | 21.7391 | `candidate.cpp` |
| 2 | different | 40.2174 | 21.7391 | `candidate.cpp` |
| 3 | different | 83.75 | 55.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled RandomVO fields, probability/valid initialization, three 50-entry arrays, counters, and lastSource. Separate arrays caused three pointers and a 92-byte loop, unlike the immutable single-pointer target.

### Attempt 2 notes

Changed the arrays to a contiguous three-by-50 layout, but the compiler retained three loop pointers and the same nonmatching 92-byte body.

### Attempt 3 notes

Used one contiguous 150-entry source buffer and explicit offsets, reproducing the target 80-byte loop and stores. Remaining differences were loop-counter register allocation and branch delay-slot scheduling. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced RandomVO initialization and the target single-pointer array loop, but could not match the target loop-counter register and branch delay-slot scheduling. No fourth attempt was run.
