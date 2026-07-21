# mem_leak_test__Fb

- Address: `0x002AC530`
- Size: `0x40` (64 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 44.4444 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released checks and flags matched, but the isolated compiler tail-called the leak checker.

### Attempt 2 notes

A narrow post-call barrier prevents the demonstrated tail call and matches exactly.

## Outcome

The released heap check and conditional leak check match with a narrow barrier preventing demonstrated tail-call optimization.
