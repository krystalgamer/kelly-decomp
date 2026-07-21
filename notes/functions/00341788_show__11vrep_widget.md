# show__11vrep_widget

- Address: `0x00341788`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override calls widget::show and then dispatches update_rot through the vrep widget vtable. The recovered object and vtable offsets match exactly.

## Outcome

The original vrep-widget show override matches exactly with its base show call and virtual rotation update.
