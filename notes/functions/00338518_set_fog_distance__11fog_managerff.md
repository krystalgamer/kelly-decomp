# set_fog_distance__11fog_managerff

- Address: `0x00338518`
- Size: `0xC` (12 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/fogmgr.cpp`
- Reference source: `KS/SRC/fogmgr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes start at `0x14` then end at `0x18`; EE GCC schedules the start store into the delay slot.

## Outcome

The released `fog_manager::set_fog_distance` assignments matched exactly on the first attempt.
