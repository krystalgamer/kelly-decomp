# __cl__25slf_destroy_entity_list_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00332698`
- Size: `0x2C` (44 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-script-wrapper-core.cpp` |

### Attempt 1 notes

The shared VM stack and script-function declarations preserve the four-byte
entity-list handle and destroy helper.

## Outcome

The released entity-list destroy SLF matched exactly on the first attempt.
