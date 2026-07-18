# deactivate_motion_blur__6entity

- Address: `0x00132F58`
- Size: `0x14` (20 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears the motion-blur bit (`0x400`) in flags at offset `0x78`.

## Outcome

The released `entity::deactivate_motion_blur` flag clear matched exactly on the first attempt.
