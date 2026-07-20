# get_first_child__6widget

- Address: `0x0033EAD8`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.5 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The empty-first source branch was inverted by EE GCC; spelling the nonempty case first is needed for the target branch direction.

### Attempt 2 notes

A minimal list layout and volatile trivial iterator reproduce the old container spill before returning the first child.

## Outcome

The released `widget::get_first_child` implementation matched exactly.
