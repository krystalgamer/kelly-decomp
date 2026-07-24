# stop_jockey__13ai_locomotion

- Address: `0x00108418`
- Size: `0x8C` (140 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.4286 | 51.4286 | `candidate.cpp` |
| 2 | different | 88.5714 | 88.5714 | `candidate.cpp` |
| 3 | different | 94.2857 | 94.2857 | `candidate.cpp` |
| 4 | different | 94.2857 | 94.2857 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released jockey stop matched after preserving scalar vector assignment and using an empty compiler barrier to retain the entity pointer before the kill-animation call.

## Outcome

The released jockey-stop function matched exactly on the fifth attempt.
