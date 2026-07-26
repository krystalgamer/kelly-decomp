# add_light_source__21world_dynamics_systemRC7stringxbT2R9entity_id

- Address: `0x0029C080`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 98.9362 | 97.8723 | `candidate.cpp` |
| 3 | different | 37.7551 | 16.3265 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Using the target allocation size and returned constructor pointer reproduces
the released light-source creation exactly.

## Outcome

Released light allocation, construction, nonstatic flagging, visibility, and world insertion reproduce the target exactly.
