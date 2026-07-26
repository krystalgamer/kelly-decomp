# goto_position__12ai_interfaceRC8vector3dfbN23

- Address: `0x00105688`
- Size: `0xC0` (192 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 84.1837 | 75.5102 | `candidate.cpp` |
| 4 | different | 76.5306 | 65.3061 | `candidate.cpp` |
| 5 | different | 64.5 | 58.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body produced equivalent `bbb` repeated-bool mangling and
a longer flag-update schedule.

### Attempt 3 notes

Binding the target symbol and spelling the reached-destination update
explicitly produced the best score, but remained one instruction longer.

### Attempt 5 notes

Register-bound and ternary flag-update forms could not reproduce the target's
compact flag store and null-locomotion return schedule.

## Outcome

Five source-level forms could not reproduce the target's compact reached-destination flag update and null-locomotion return schedule.
