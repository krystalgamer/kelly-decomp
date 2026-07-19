# Load__20SurfBoardObjectClassPc

- Address: `0x001EE8E0`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 1.2295 | 0.0 | `candidate.cpp` |
| 2 | different | 90.625 | 62.5 | `candidate.cpp` |
| 3 | different | 75.0 | 50.0 | `candidate.cpp` |
| 4 | different | 46.875 | 12.5 | `candidate.cpp` |
| 5 | different | 56.25 | 50.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an aggregate-copy, constant-folding, store-order, or call-delay scheduling mismatch.

### Attempt 2 notes

The second source shape fixed the constant or call structure but retained an independent-store schedule mismatch.

### Attempt 3 notes

The third shape isolated the remaining return-value or call-delay scheduling mismatch.

### Attempt 4 notes

Tying the return value before materializing the float moved v0 too early and still allowed the independent stores to reorder.

### Attempt 5 notes

The fifth source shape could not simultaneously preserve the target constant/return setup and z/x/y store schedule; the five-attempt limit is exhausted.

## Outcome

Five source shapes could not simultaneously reproduce the target float-constant/return setup and z/x/y store schedule; best byte score was 90.625%.
