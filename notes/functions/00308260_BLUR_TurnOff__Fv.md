# BLUR_TurnOff__Fv

- Address: `0x00308260`
- Size: `0xC` (12 bytes)
- Object: `game/files_misfits`
- Debug source: `ks/blur.cpp`
- Reference source: `KS/SRC/ks/blur.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target clears the word-sized blur global through a local absolute equate.

## Outcome

The target `BLUR_TurnOff` global clear matched exactly on the first attempt.
