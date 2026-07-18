# get_my_entity__C7ai_goal

- Address: `0x00106608`
- Size: `0xC` (12 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method forwards through `owner` to the entity pointer at owner offset `0x4`.

## Outcome

The released `ai_goal::get_my_entity` forwarding accessor matched exactly on the first attempt.
