# init__8MusicMan

- Address: `0x002592E8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.625 | 56.25 | `candidate.cpp` |
| 2 | different | 59.375 | 37.5 | `candidate.cpp` |
| 3 | different | 46.875 | 28.125 | `candidate.cpp` |
| 4 | different | 65.625 | 56.25 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released music arrays and state defaults matched after a non-emitting loop barrier reproduced the target order-pointer branch-delay schedule.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released music manager initialization matched exactly on the fifth attempt.
