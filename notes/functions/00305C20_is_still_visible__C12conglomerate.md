# is_still_visible__C12conglomerate

- Address: `0x00305C20`
- Size: `0x84` (132 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 67.6471 | 47.0588 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released conglomerate visibility query matched after preserving the cached member-vector end iterator and exact virtual slots.

## Outcome

The released conglomerate visibility query matched exactly on the third attempt.
