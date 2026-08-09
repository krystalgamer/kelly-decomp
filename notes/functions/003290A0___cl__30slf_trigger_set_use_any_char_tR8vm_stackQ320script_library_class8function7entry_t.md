# __cl__30slf_trigger_set_use_any_char_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003290A0`
- Size: `0x38` (56 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_trigger.cpp`
- Reference source: `KS/SRC/script_lib_trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SLF uses the shared trigger and script-function declarations to
pop its arguments, convert the number, and call the inline setter.

## Outcome

The local trigger, VM stack, and script wrapper declarations were removed.
