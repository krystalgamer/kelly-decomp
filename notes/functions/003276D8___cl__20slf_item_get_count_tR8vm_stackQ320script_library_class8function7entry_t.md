# __cl__20slf_item_get_count_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003276D8`
- Size: `0x174` (372 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_item.cpp`
- Reference source: `KS/SRC/script_lib_item.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source first-pass attempt using the class declaration and unchanged operator body from `kelly-slaters-pro-surfer/KS/SRC/script_lib_item.cpp:77-100`, with supporting released declarations from `script_lib_item.h:9-28`, `item.h:32-103`, `vm_stack.h:21-77`, and `script_library_class.h:264-294`.

Canonical result: `compile_failed`, score `0.0`. The compiler could not resolve `KS/SRC/global.h` and `KS/SRC/vm_stack.h`. Per the one-attempt lane constraint, no retry or declaration variant was attempted.

## Outcome

Exact released-source first pass for the script item count getter did not match.
