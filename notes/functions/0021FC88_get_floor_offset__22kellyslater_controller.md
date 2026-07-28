# get_floor_offset__22kellyslater_controller

- Address: `0x0021FC88`
- Size: `0x164` (356 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.0112 | 22.4719 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released body from kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.cpp:7177-7204 with minimal declarations from controller.h, entity.h, entity_anim.h, and anim.h. Result: different, score 41.0112 (146/356 bytes; 20/89 instructions); candidate size 352 bytes. No variants or diff chasing.

## Outcome

The exact released controller floor-offset getter differed from the target; the sole attempt scored 41.0112%.
