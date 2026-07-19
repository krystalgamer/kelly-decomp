# show__16interface_widget

- Address: `0x00288A80`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/interface.cpp`
- Reference source: `KS/SRC/interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The active released body only invokes `widget::show`; a barrier prevents a sibling call.

## Outcome

The released `interface_widget::show` wrapper matched exactly on the first attempt.
