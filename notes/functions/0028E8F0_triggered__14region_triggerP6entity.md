# triggered__14region_triggerP6entity

- Address: `0x0028E8F0`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 42.7083 | 25.0 | `candidate.cpp` |
| 3 | different | 71.5909 | 63.6364 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released region_trigger predicate, entity get_region virtual slot, region-node data offset, rb-tree layout/find helper, and end comparison. Explicit false/done labels matched byte-exactly on attempt 4.

## Outcome

Matched released region trigger predicate
