# copy__20ai_locomotion_directP20ai_locomotion_direct

- Address: `0x001095C0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released derived copy delegates to the matched base copy. An empty compiler barrier prevents this compiler's tail-call optimization and preserves the target wrapper on attempt two.

## Outcome

The released `ai_locomotion_direct::copy` call wrapper matched on attempt two with a tail-call barrier.
