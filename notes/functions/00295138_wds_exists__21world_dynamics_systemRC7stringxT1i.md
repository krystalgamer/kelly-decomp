# wds_exists__21world_dynamics_systemRC7stringxT1i

- Address: `0x00295138`
- Size: `0x68` (104 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.3462 | 88.4615 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact temporary string construction, file-finder call, duplicated destruction paths, and boolean results. Inverting the source condition reproduced the released branch layout on attempt 2.

## Outcome

Matched world file existence check
