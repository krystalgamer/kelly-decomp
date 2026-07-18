# copy__13ai_locomotionP13ai_locomotion

- Address: `0x00106F18`
- Size: `0x1C` (28 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released copy transfers `patrol_radius`, `patrol_id`, and word-sized `xz_movement` at offsets `0x70`, `0x68`, and `0x6C`.

## Outcome

The released `ai_locomotion::copy` field copies matched exactly on the first attempt.
