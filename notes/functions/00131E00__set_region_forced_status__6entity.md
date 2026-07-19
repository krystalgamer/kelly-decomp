# _set_region_forced_status__6entity

- Address: `0x00131E00`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets `EFLAG_REGION_FORCED` in flags at `0x78` and clears `my_sector`/`center_region` at `0x158`/`0x15C`.

## Outcome

The released `entity::_set_region_forced_status` flag and pointer updates matched exactly on the first attempt.
