# play_anim__6entityiRC7stringxfUss

- Address: `0x00133E60`
- Size: `0xD8` (216 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.2593 | 24.0741 | `candidate.cpp` |
| 2 | different | 24.0741 | 11.1111 | `candidate.cpp` |
| 3 | different | 34.2593 | 24.0741 | `candidate.cpp` |
| 4 | different | 50.463 | 37.037 | `candidate.cpp` |
| 5 | different | 26.7857 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

Recovered all calls and error cleanup, but slot/filename saved registers and success/error block order differed.

### Attempt 2 notes

Pinning slot and filename registers disturbed prologue scheduling and retained the compact body.

### Attempt 3 notes

A zero-instruction end barrier did not change the released error-first source shape.

### Attempt 4 notes

Writing the success path first improved block order and reached the best 50.463% score, but saved-register assignment still differed.

### Attempt 5 notes

Combining success-first control with fixed saved registers expanded the function and reduced matching.

## Outcome

Recovered the released track acquisition, loaded animation delegation, entity-name error formatting, and string cleanup. Five candidates could not reproduce the shipped saved-register and success/error block schedule; best byte score was 50.463%.
