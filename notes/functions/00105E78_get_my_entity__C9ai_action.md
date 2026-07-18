# get_my_entity__C9ai_action

- Address: `0x00105E78`
- Size: `0x1C` (28 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_actions.cpp`
- Reference source: `KS/SRC/ai_actions.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.8571 | 71.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released accessor calls the already matched `ai_goal::get_my_entity` through `owner` at offset `0x0`. After the compiler wrapper gained EE `sq/lq` stack-save fixups, the wrapper matched on attempt two.

## Outcome

The released `ai_action::get_my_entity` call wrapper matched on attempt two with corrected EE stack saves.
