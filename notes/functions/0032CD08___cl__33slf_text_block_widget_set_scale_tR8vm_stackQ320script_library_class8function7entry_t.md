# __cl__33slf_text_block_widget_set_scale_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032CD08`
- Size: `0x40` (64 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 93.75 | 87.5 | `0032CD08.cpp` |
| 3 | different | 93.75 | 87.5 | `size64-text-scale-base.cpp` |

### Attempt 1 notes

The released SLF parameter pop and virtual text scale dispatch match exactly.

### Attempt 2 notes

The clean shared text-block call preserves behavior and size, but the
incomplete widget hierarchy places `scale_to(float)` at slot `0x8c` instead
of the target `0x12c`.

### Attempt 3 notes

Dispatching through an explicit shared `widget` base retains the same slot
mismatch.

## Outcome

The manual vtable dispatch was removed and the wrapper was deferred until the
shared widget hierarchy reaches the released slot.
