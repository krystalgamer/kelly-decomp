# __cl__25slf_timer_widget_freeze_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032C410`
- Size: `0x1C` (28 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.4286 | 14.2857 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The generated 28-byte manifest misclassified this operator body as a destructor wrapper; the candidate called the script-function destructor instead of executing `freeze()`.

### Attempt 2 notes

The released `SLF_PARMS` and `SLF_DONE` forms pop the timer-widget parameter, clear its word-sized `running` field at 0x190, and return completion.

## Outcome

The released `slf_timer_widget_freeze_t` execution body matched exactly.
