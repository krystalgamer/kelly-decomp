# __cl__34slf_timer_widget_remove_function_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032C808`
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

Used the released SLF_PARMS/SLF_DONE member call. EE GCC loaded the timer-widget pointer first and the start value in the call delay slot; the target loads end, start, then widget in the delay slot.

### Attempt 2 notes

Native forms preserve the released call but load widget/start/end in a
different scheduler order.

## Outcome

The prior exact form required fixed-register declarations and compiler
barriers. Those matching-only constructs were removed.
