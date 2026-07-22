# __cl__32slf_fluid_bar_widget_set_color_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032E158`
- Size: `0x48` (72 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 2 | different | 86.1111 | 77.7778 | `candidate.cpp` |
| 3 | different | 30.2632 | 10.5263 | `candidate.cpp` |
| 4 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 5 | different | 65.2778 | 50.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released SLF body reused the shared widget hierarchy and vector layout. All offsets and registers matched, but GCC loaded the virtual function before the green component rather than after it.

### Attempt 2 notes

A volatile green-component read constrained the load too early and reduced the score.

### Attempt 3 notes

A vector reference introduced an extra instruction and did not recover the target schedule.

### Attempt 4 notes

Separate component locals normalized to the same nonmatching schedule as attempt one.

### Attempt 5 notes

A normalized empty barrier overconstrained scheduling and scored worse, so no barrier is installed.

## Outcome

The released fluid-bar color script body has exact shared layout and registers, but available GCC reverses one component-load and virtual-function-load pair.
