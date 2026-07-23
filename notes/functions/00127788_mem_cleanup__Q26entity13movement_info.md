# mem_cleanup__Q26entity13movement_info

- Address: `0x00127788`
- Size: `0x5C` (92 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released static allocation cleanup pattern and movement_info globals; it matched byte-exactly on attempt 1.

## Outcome

Matched entity movement info memory cleanup
