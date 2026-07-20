# __cl__29slf_fluid_bar_widget_resize_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032E210`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released 12-byte SLF_PARMS pop and fluid-bar resize call matched while preserving SLF macros. Two empty matching barriers enforce the target height/width/widget load order and emit no target instructions.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released fluid_bar_widget::resize script function matched exactly on the first attempt.
