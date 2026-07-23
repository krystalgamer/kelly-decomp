# find_func_by_address__C13script_objectPCUs

- Address: `0x00350F28`
- Size: `0x54` (84 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released script_object function-address lookup, funcs vector offsets, vm_executable start/size offsets, and unsigned-short pointer arithmetic. It matched byte-exactly.

## Outcome

Matched released script function address lookup
