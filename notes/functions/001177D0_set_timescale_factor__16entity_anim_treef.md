# set_timescale_factor__16entity_anim_treef

- Address: `0x001177D0`
- Size: `0xC` (12 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 33.3333 | `candidate.cpp` |
| 2 | different | 37.5 | 25.0 | `candidate.cpp` |
| 3 | different | 83.3333 | 33.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released method forwards the factor to `control` then `control_b`. Reconstructing both inline control objects at bases `0x3C` and `0x78` let EE GCC schedule the first store into the return delay slot, matching on attempt four.

## Outcome

The released dual-control `entity_anim_tree::set_timescale_factor` matched on attempt four after reconstructing the source-faithful control object layout and delay-slot scheduling.
