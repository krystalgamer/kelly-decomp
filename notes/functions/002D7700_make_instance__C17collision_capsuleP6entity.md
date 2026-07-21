# make_instance__C17collision_capsuleP6entity

- Address: `0x002D7700`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.5294 | 77.7778 | `candidate.cpp` |
| 2 | different | 86.7647 | 77.7778 | `candidate.cpp` |
| 3 | different | 86.7647 | 72.2222 | `candidate.cpp` |
| 4 | different | 86.7647 | 77.7778 | `candidate.cpp` |
| 5 | different | 86.7647 | 77.7778 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released NEW collision_capsule expression and authentic class size; custom allocator argument scheduling differed.

### Attempt 2 notes

Resolved the released allocator, constructor, and pretty-function addresses; three allocator setup instructions remained differently scheduled.

### Attempt 3 notes

Represented the released pretty-function address directly; immediate construction diverged while scheduling remained different.

### Attempt 4 notes

Separated allocation from placement construction after inspecting the diff; the allocator setup schedule was unchanged.

### Attempt 5 notes

Staged the released heap and line arguments as typed locals; GCC still selected the same nonmatching schedule.

## Outcome

Deferred after five source-authentic allocation forms; behavior, size, constants, and calls match, but isolated GCC schedules the custom allocator arguments differently.
