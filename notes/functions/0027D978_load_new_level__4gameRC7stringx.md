# load_new_level__4gameRC7stringx

- Address: `0x0027D978`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 2 | different | 41.1765 | 23.5294 | `candidate.cpp` |
| 3 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 4 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 5 | different | 83.8235 | 70.5882 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body with c_str, strcpy, and the load-new-level flag; only prologue and argument scheduling differed.

### Attempt 2 notes

Restored the exact released bitfield declaration; its isolated storage width did not match the target 64-bit flag unit.

### Attempt 3 notes

Staged the released c_str result before strcpy after inspecting the diff; scheduling remained unchanged.

### Attempt 4 notes

Staged both released strcpy arguments as locals; GCC retained the same schedule.

### Attempt 5 notes

Used the known released scene buffer address directly; immediate formation diverged further.

## Outcome

Deferred after five source-level attempts; behavior and post-call flag update match, but isolated GCC saves registers and evaluates the strcpy arguments in a different order.
