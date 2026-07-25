# read__14entity_triggerR10chunk_file

- Address: `0x0028E9F0`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7368 | 2.6316 | `candidate.cpp` |
| 2 | different | 42.7632 | 36.8421 | `candidate.cpp` |
| 3 | different | 42.7632 | 36.8421 | `candidate.cpp` |
| 4 | different | 38.8158 | 15.7895 | `candidate.cpp` |
| 5 | different | 42.1053 | 34.2105 | `candidate.cpp` |

## Outcome

Five released-source trigger read variants reproduced serialization and entity lookup, but local object/saved-register scheduling did not match.
