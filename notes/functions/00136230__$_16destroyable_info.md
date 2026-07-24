# _$_16destroyable_info

- Address: `0x00136230`
- Size: `0x90` (144 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.9474 | 73.6842 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released destructor matched after blocking the conditional object-delete tail call and preserving one shared epilogue.

## Outcome

The released destroyable-info destructor matched exactly on the second attempt.
