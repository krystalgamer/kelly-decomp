# update_scale__11vrep_widget

- Address: `0x003419E0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.2727 | 45.4545 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-utility-wrapper-core.cpp` |

### Attempt 2 notes

The shared widget declaration and a local function pointer preserve the base
scale update followed by the normal `update_mat` call.

## Outcome

The compiler barrier was removed.
