# __cl__20slf_item_set_count_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00327620`
- Size: `0x48` (72 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_item.cpp`
- Reference source: `KS/SRC/script_lib_item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.0556 | 83.3333 | `candidate.cpp` |
| 2 | different | 98.6111 | 94.4444 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released body and parameter types first with a minimal original-style `item::set_count` declaration. The body shape and schedule matched, but the declaration placed the virtual table at +0 and `set_count` in the first slot rather than the released `bone`/`entity` hierarchy positions.

### Attempt 2 notes

Added the inherited virtual method count and the exact item-local method order from the released headers. This selected the correct `set_count` slot at +0x640, but still loaded the vptr from +0 because it did not yet model the released `item : entity : bone` object prefix.

### Attempt 3 notes

Modeled the released `item : entity : bone` inheritance, including the bone state preceding its vptr, and retained the released item virtual-method order. This matched exactly; the reserved inherited slots are a documented last-resort shared declaration because importing the complete entity header is not yet possible in isolated selector builds.

### Attempt 4 notes

Moved the matching hierarchy into `script_lib_item_shared.h` and reused the common VM-stack/script-library declarations. The installed function remains the exact released `SLF_PARMS` and `item::set_count` source form and matches exactly.

## Outcome

The released item count script function matches exactly with a shared item/entity/bone hierarchy and common script-library declarations.
