# set_age__6entityf

- Address: `0x00133638`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

`frame_time_info` stores age at entity offset `0x1CC`. Inlining its setter
produces the target `swc1` in the return delay slot.

## Outcome

The entity age setter delegates to an inline frame_time_info setter whose age field is at object offset 0x1CC. The first layout candidate matched exactly and preserved the target ROM checksum.
