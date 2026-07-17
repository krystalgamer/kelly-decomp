# get_value__Ct4anim1ZP6entityRC14anim_control_tPP6entity

- Address: `0x00121A78`
- Size: `0x8` (8 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The const control-based `anim<entity *>` getter is empty. The explicit
specialization reproduced the `C`-qualified template mangling immediately.

## Outcome

The const control-based anim<entity *> getter is an empty virtual specialization. It matched on the first attempt and preserved the exact full ROM after integration.
