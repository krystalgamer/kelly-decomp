# _$_21script_data_interface

- Address: `0x0013CFD8`
- Size: `0x88` (136 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/script_data_interface.cpp`
- Reference source: `KS/SRC/script_data_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 74.3421 | 68.4211 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released script-data interface teardown matched after blocking conditional delete tail-call optimization while preserving vtable and string destruction order.

## Outcome

The released script-data interface destructor matched exactly on the second attempt.
