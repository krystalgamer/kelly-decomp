# set_collisions_active__6entitybT1

- Address: `0x00138E60`
- Size: `0x4C` (76 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 13.1579 | 5.2632 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body initially emitted the uncompressed bb spelling under the isolated compiler; the shared original-style declaration was annotated with the target's historical bT1 symbol spelling.

### Attempt 2 notes

With the historical symbol spelling, the released logic emitted a 64-byte sibling call to region_update_poss_collide rather than the target call and return.

### Attempt 3 notes

A normalized empty barrier after the optional region update prevented the demonstrated sibling-call optimization and produced the exact target. It emits no target instruction.

## Outcome

Matched the released collision activation logic with shared entity flags and a documented barrier preventing sibling-call merging.
