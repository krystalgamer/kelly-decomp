# pop_disable__12ai_interface

- Address: `0x00105570`
- Size: `0x1C` (28 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method decrements `disable_count` at `0x30` and clamps it to zero.

## Outcome

The released `ai_interface::pop_disable` decrement and clamp matched exactly on the first attempt.
