# mem_leak_prep__Fv

- Address: `0x002AC508`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.7778 | 77.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size36-memory.cpp` |

### Attempt 1 notes

The direct assignment stored the checkpoint before the target early RA restore.

### Attempt 2 notes

The exact released assignment to the shared leak checkpoint naturally emits the target call and store schedule.

## Outcome

The released `mem_leak_prep` wrapper matched exactly.
