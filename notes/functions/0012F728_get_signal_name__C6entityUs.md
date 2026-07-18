# get_signal_name__C6entityUs

- Address: `0x0012F728`
- Size: `0xC` (12 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Assertions are removed and the target returns a resolved signal-name literal through linker-style adjusted-high address materialization.

## Outcome

The target `entity::get_signal_name` constant pointer matched exactly on the first attempt.
