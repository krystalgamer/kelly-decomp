# path_graph_system_construct__Fv

- Address: `0x00349BF8`
- Size: `0x48` (72 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.1111 | 66.6667 | `candidate.cpp` |
| 2 | different | 90.2778 | 88.8889 | `candidate.cpp` |
| 3 | different | 94.4444 | 88.8889 | `candidate.cpp` |
| 4 | different | 73.6111 | 66.6667 | `candidate.cpp` |
| 5 | different | 94.4444 | 88.8889 | `candidate.cpp` |

### Attempt 1 notes

The exact released NEW vector expression and original three-pointer vector layout produced the target allocation and initialization, but isolated compilation used a smaller frame and a local descriptor relocation.

### Attempt 2 notes

A test-only 16-byte constructor context reproduced the target frame and save offsets, leaving the descriptor relocation and save order different.

### Attempt 3 notes

Reused the immutable released allocation descriptor address. Only the RA and s0 save instructions remained reversed.

### Attempt 4 notes

A normalized empty barrier disturbed additional scheduling and scored worse.

### Attempt 5 notes

Moving the test-only frame context after the NEW expression retained the same two-save scheduling mismatch.

## Outcome

The released path workspace construction reaches exact allocation and initialization, but available GCC reverses two register-save instructions from the target.
