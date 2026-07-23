# __cl__19slf_wait_keypress_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00321270`
- Size: `0x58` (88 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.7727 | 22.7273 | `candidate.cpp` |
| 2 | different | 43.1818 | 22.7273 | `candidate.cpp` |
| 3 | different | 43.1818 | 31.8182 | `candidate.cpp` |
| 4 | different | 43.1818 | 31.8182 | `candidate.cpp` |
| 5 | different | 47.7273 | 27.2727 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released wait_keypress body and SLF parameter pop, but initially declared get_control_delta with two ints, giving the wrong mangling; the compiler also omitted one target float scheduling nop.

### Attempt 2 notes

Corrected the device_id_t signature and exact helper relocation. The function remained 84 bytes and grouped stack/global setup differently.

### Attempt 3 notes

Constrained the vm_stack object to target v1 and expanded the pop. Register setup improved slightly, but the target nop remained absent.

### Attempt 4 notes

Named the delta/1.0f values and constrained the float constant through a non-emitting boundary. Code generation was unchanged.

### Attempt 5 notes

Restored exact script-function inheritance and explicit true/false returns. The compiler still omitted the target post-mtc1 scheduler nop.

## Outcome

Released wait_keypress script operator remained blocked by a floating scheduler nop and equivalent setup order after five source-level attempts.
