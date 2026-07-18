# get_my_entity__C13ai_locomotion

- Address: `0x00106EA0`
- Size: `0xC` (12 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method forwards through `owner` to the entity pointer at owner offset `0x4`.

## Outcome

The released `ai_locomotion::get_my_entity` forwarding accessor matched exactly on the first attempt.
