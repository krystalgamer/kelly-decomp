# flush__11text_widget

- Address: `0x003407F0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-final1-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-final1-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-final1-probes-3.cpp` |

## Outcome

All three direct forms become an eight-byte sibling call to `widget::flush`.
The target retains a normal frame, so the wrapper was deferred.
