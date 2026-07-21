# __cl__36slf_fluid_bar_widget_set_fill_rate_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032E598`
- Size: `0x38` (56 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SLF preserves SLF_PARMS/SLF_DONE and inlines fluid_bar::set_fill_rate, storing the requested rate and marking the widget stale only when it differs from the prior rate. Recovered offsets match exactly.

## Outcome

The original fluid-bar fill-rate SLF matches exactly with preserved SLF macros and the authentic inline stale-state update.
