# __cl__34slf_fluid_bar_widget_set_abs_val_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032E468`
- Size: `0xBC` (188 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.1017 | 3.3898 | `candidate.cpp` |
| 2 | different | 35.6383 | 10.6383 | `candidate.cpp` |
| 3 | different | 16.6667 | 3.9216 | `candidate.cpp` |
| 4 | different | 16.3265 | 2.0408 | `candidate.cpp` |
| 5 | different | 44.3878 | 24.4898 | `candidate.cpp` |

### Attempt 5 notes

Five source-level aliasing variants reproduced both clamp operations and change
flags, but not the original load/store schedule.

## Outcome

Five source-level variants reproduced fluid-bar clamping and dirty-flag semantics, but the original alias-driven load/store schedule did not match.
