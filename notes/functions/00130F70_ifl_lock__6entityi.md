# ifl_lock__6entityi

- Address: `0x00130F70`
- Size: `0x68` (104 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.1034 | 55.1724 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the visual/frame_info offsets, anim-length virtual slot, bounds tests, and frame lock helper. Preventing the final helper tail call matched on attempt 2.

## Outcome

Matched entity IFL frame lock
