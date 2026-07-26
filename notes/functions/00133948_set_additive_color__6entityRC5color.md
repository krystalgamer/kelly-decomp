# set_additive_color__6entityRC5color

- Address: `0x00133948`
- Size: `0xC0` (192 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.4167 | 83.3333 | `candidate.cpp` |
| 2 | different | 81.7708 | 79.1667 | `candidate.cpp` |
| 3 | different | 85.4167 | 83.3333 | `candidate.cpp` |
| 4 | different | 21.875 | 8.3333 | `candidate.cpp` |
| 5 | different | 77.6042 | 75.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released non-light diagnostic matched 40 of 48 instructions; only
callee-save and two append-call argument schedules differed.

### Attempt 5 notes

Function and operator barriers, named temporaries, and a local message pointer
could not reproduce the target schedule.

## Outcome

The released additive-color diagnostic matched 40 of 48 instructions, but five source forms retained divergent save and append-call scheduling.
