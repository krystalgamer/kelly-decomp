# __12entity_maker

- Address: `0x00308270`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor uses the shared `entity_maker` and `entity_pool_set`
declarations with the carried vtable alias.

## Outcome

The local maker and pool declarations were removed.
