# __11camera_list

- Address: `0x002EE0F8`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `candidate.cpp` |
| 2 | different | 6.25 | 0.0 | `candidate.cpp` |
| 3 | different | 29.1667 | 6.25 | `candidate.cpp` |
| 4 | different | 27.0833 | 4.1667 | `candidate.cpp` |
| 5 | different | 30.7292 | 4.1667 | `candidate.cpp` |

### Attempt 3 notes

Expanding the released list sentinel construction into the camera constructor
recovered the allocation logic but not its inlined register schedule.

### Attempt 5 notes

Inline-template and barrier variants could not reproduce the target constructor.

## Outcome

Five source-level camera-list constructors could not reproduce the target's flattened two-sentinel list initialization.
