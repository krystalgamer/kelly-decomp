# make_copy__14surfer_ai_goalP12ai_interface

- Address: `0x0020BCC0`
- Size: `0x44` (68 bytes)
- Object: `game/files_ks`
- Reference source: `KS/SRC/ks/kellyslater_ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.6471 | 11.7647 | `candidate.cpp` |
| 2 | different | 73.5294 | 77.7778 | `candidate.cpp` |
| 3 | different | 73.5294 | 77.7778 | `candidate.cpp` |
| 4 | different | 86.7647 | 72.2222 | `candidate.cpp` |
| 5 | different | 86.7647 | 77.7778 | `candidate.cpp` |

### Attempt 1 notes

Expanded the released AI_GOAL_MAKE_COPY_MAC body with an initial abbreviated class size and normal new; allocation size and allocator overload differed.

### Attempt 2 notes

Restored the released NEW allocator overload, pretty-function argument, and exact 88-byte class size; only allocator-argument scheduling differed.

### Attempt 3 notes

Separated allocation from placement construction after inspecting the diff; GCC emitted the same argument schedule.

### Attempt 4 notes

Resolved authentic call addresses and represented the released pretty-function address directly; immediate formation and argument scheduling still differed.

### Attempt 5 notes

Modeled the pretty-function text as an absolute source symbol, restoring its addiu form, but GCC continued to schedule the zero allocator arguments differently.

## Outcome

Deferred after five source-authentic allocation forms; behavior, size, calls, and constants match, but isolated GCC schedules the custom allocator arguments differently from the target.
