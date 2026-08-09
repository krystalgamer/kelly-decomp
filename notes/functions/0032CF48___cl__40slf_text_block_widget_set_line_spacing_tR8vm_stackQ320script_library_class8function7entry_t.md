# __cl__40slf_text_block_widget_set_line_spacing_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032CF48`
- Size: `0x40` (64 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 96.875 | 87.5 | `0032CF48.cpp` |
| 3 | different | 96.875 | 87.5 | `size64-line-spacing-local.cpp` |

### Attempt 1 notes

The released SLF parameter pop and virtual line-spacing dispatch match exactly.

### Attempt 2 notes

The clean shared text-block call preserves behavior and size, but the
incomplete widget hierarchy places the virtual slot eight bytes early.

### Attempt 3 notes

Naming the shared text-block target explicitly retains the same slot mismatch.

## Outcome

The manual vtable dispatch was removed and the wrapper was deferred until the
shared widget hierarchy reaches the released slot.
