# __cl__34slf_timer_widget_remove_function_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032C808`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.7692 | 76.9231 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released SLF_PARMS/SLF_DONE member call. EE GCC loaded the timer-widget pointer first and the start value in the call delay slot; the target loads end, start, then widget in the delay slot.

### Attempt 2 notes

The released 12-byte SLF_PARMS pop and remove_script_function call matched while preserving SLF macros. Two empty matching barriers enforce the target end/start/widget load order and emit no target instructions.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released timer-widget remove_function script function matched exactly.
