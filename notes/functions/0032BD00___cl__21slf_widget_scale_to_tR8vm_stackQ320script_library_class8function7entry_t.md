# __cl__21slf_widget_scale_to_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032BD00`
- Size: `0x44` (68 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 91.1765 | 64.7059 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Restored the released nested entry type, then replaced the abbreviated manual dispatch with the originating widget virtual layout: vptr +320 and scale_to slot +120. The released SLF body then matched exactly.

## Outcome

The released widget scale script function matches exactly.
