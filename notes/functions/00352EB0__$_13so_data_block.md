# _$_13so_data_block

- Address: `0x00352EB0`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/so_data_block.cpp`
- Reference source: `KS/SRC/so_data_block.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.2632 | 47.3684 | `candidate.cpp` |
| 2 | different | 55.2632 | 47.3684 | `candidate.cpp` |
| 3 | different | 55.2632 | 47.3684 | `candidate.cpp` |
| 4 | different | 29.4118 | 23.5294 | `candidate.cpp` |
| 5 | different | 22.7273 | 9.0909 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released destructor body; _destroy matched but GCC tail-called conditional delete.

### Attempt 2 notes

Added the allowed empty barrier for the demonstrated tail call; GCC retained the tail call.

### Attempt 3 notes

Added a trivial base to model hidden layout effects; scheduling remained unchanged.

### Attempt 4 notes

Gave the base an explicit empty destructor; GCC introduced an extra base-destructor chain.

### Attempt 5 notes

Tested a virtual declaration after the diff; the vptr store and larger body diverged.

## Outcome

Deferred after five source-only attempts; _destroy behavior matches, but isolated GCC tail-calls delete while the target retains a normal call.
