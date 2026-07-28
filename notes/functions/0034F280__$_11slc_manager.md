# _$_11slc_manager

- Address: `0x0034F280`
- Size: `0x180` (384 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released destructor body from `kelly-slaters-pro-surfer/KS/SRC/script_library_class.cpp:113-120` was tested once with only its released class header and `script_strings_deconstruct` declaration.

Result: compile failed because Wine GCC could not resolve the released header include; per lane rules this is the sole attempt (`attempt-1/compiler.stderr`, `attempt-1/result.json`).

## Outcome

The exact released SLC manager destructor failed to compile in the isolated bench; no source variant was attempted.
