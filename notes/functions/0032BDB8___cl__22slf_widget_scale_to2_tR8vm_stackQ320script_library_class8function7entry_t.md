# __cl__22slf_widget_scale_to2_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032BDB8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.1053 | 89.4737 | `candidate.cpp` |
| 2 | different | 92.1053 | 89.4737 | `candidate.cpp` |
| 3 | different | 78.9474 | 42.1053 | `candidate.cpp` |
| 4 | different | 64.4737 | 47.3684 | `candidate.cpp` |
| 5 | different | 92.1053 | 89.4737 | `candidate.cpp` |

## Attempt notes

Used immutable `script_lib_widget.cpp:209-230`, exact `SLF_PARMS`/`SLF_DONE`,
and reconstructed the released widget virtual declaration order through both
`scale_to` overloads. The original body and a duration barrier differed only
by scheduling the duration load after the virtual function-pointer load.
Local argument, value-barrier, and widget-reference variants did not improve
that schedule.

## Outcome

Deferred after five source-only attempts. Best candidates emitted the same 19
instructions, but two adjacent loads were ordered differently from retail.
