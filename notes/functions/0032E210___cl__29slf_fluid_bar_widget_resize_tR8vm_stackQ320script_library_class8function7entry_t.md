# __cl__29slf_fluid_bar_widget_resize_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032E210`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.7692 | 76.9231 | `candidate.cpp` |
| 2 | different | 80.7692 | 76.9231 | `candidate.cpp` |
| 3 | different | 80.7692 | 76.9231 | `candidate.cpp` |

### Attempt 1 notes

Native forms preserve the released resize call but load widget/width/height in
a different scheduler order.

## Outcome

The prior exact form required fixed-register declarations and compiler
barriers. Those matching-only constructs were removed.
