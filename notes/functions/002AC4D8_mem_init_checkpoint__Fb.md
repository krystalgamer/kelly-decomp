# mem_init_checkpoint__Fb

- Address: `0x002AC4D8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released build ignores the toggle and returns `mem_set_checkpoint`; retaining the result across a barrier preserves the wrapper.

## Outcome

The released `mem_init_checkpoint` wrapper matched exactly on the first attempt.
