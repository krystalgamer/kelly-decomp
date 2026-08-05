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
| 1 | different | 62.5 | 50.0 | `size40-utilities.cpp` |
| 2 | different | 20.4545 | 9.0909 | `size40-widget-child-2.cpp` |
| 3 | matched | 100.0 | 100.0 | `size40-widget-child-3.cpp` |

### Attempt 1 notes

The exact released `empty`/`begin` form uses the opposite branch direction.

### Attempt 2 notes

A named iterator introduces extra iterator/end temporaries and expands the
function to 44 bytes.

### Attempt 3 notes

Using the shared list node type and retaining the released iterator temporary
reproduces the target stack spill.

## Outcome

The shared STL list declaration matches without recreating its node layout.
