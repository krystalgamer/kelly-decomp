# _GLOBAL_$I$script_string_none

- Address: `0x00335458`
- Size: `0x20` (32 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-script-thunks-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-script-thunks-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-script-thunks-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling
call. The manual generated-symbol wrapper was removed and the target returned
to raw text.
