# _$_19animation_interface

- Address: `0x0013AF80`
- Size: `0xB0` (176 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/animation_interface.cpp`
- Reference source: `KS/SRC/animation_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.1364 | 2.2727 | `candidate.cpp` |
| 2 | different | 30.2083 | 10.4167 | `candidate.cpp` |
| 3 | different | 54.5455 | 40.9091 | `candidate.cpp` |
| 4 | different | 97.1591 | 90.9091 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released empty destructor and compiler-generated map/base teardown matched on Sol attempt five after preserving header reload registers and deletion-test allocation.

## Outcome

Matched animation interface destruction.
