# render__11ai_polypath

- Address: `0x0010BAF0`
- Size: `0x58` (88 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath.cpp`
- Reference source: `KS/SRC/ai_polypath.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.3636 | 89.4737 | `candidate.cpp` |
| 2 | different | 44.3182 | 36.8421 | `candidate.cpp` |
| 3 | different | 61.3636 | 89.4737 | `candidate.cpp` |
| 4 | different | 61.3636 | 89.4737 | `candidate.cpp` |
| 5 | different | 61.3636 | 89.4737 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released ai_polypath render loop with the cells vector layout and cell render helper. The compiler omitted three target post-call scheduler nops, producing 76 bytes.

### Attempt 2 notes

Added a non-emitting boundary after each cell render. The compiler changed loop shape and shortened further rather than retaining target nops.

### Attempt 3 notes

Expressed the released while loop as an equivalent for loop. The original 76-byte form returned.

### Attempt 4 notes

Called the same cell renderer through an extern-C alias. Code generation was unchanged.

### Attempt 5 notes

Restored the while loop with an explicit cell local. The compiler still omitted the target call-latency nops.

## Outcome

Released ai_polypath::render remained blocked by three post-call scheduler nops after five source-level attempts.
