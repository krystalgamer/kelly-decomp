# __cl__32slf_text_block_widget_set_text_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032CC68`
- Size: `0x30` (48 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `SLF_PARMS`/`SLF_DONE` body pops a text-block widget and string pointer, dereferences the string, and calls `set_text`.

## Outcome

The released text-block set-text SLF matched exactly on the first attempt.
