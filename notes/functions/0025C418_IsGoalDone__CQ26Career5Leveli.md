# IsGoalDone__CQ26Career5Leveli

- Address: `0x0025C418`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the released accessor indexes the word-sized `goals` array at offset `0x10`.

## Outcome

The released `Career::Level::IsGoalDone` indexed load matched exactly on the first attempt.
