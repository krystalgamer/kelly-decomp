# __cl__22slf_vector3d_xy_norm_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032A1E8`
- Size: `0x180` (384 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# 0x0032A1E8 source-first packet

- No inherited attempt existed after prepare.
- Reproduced the released operator body from `kelly-slaters-pro-surfer/KS/SRC/script_lib_vector3d.cpp:243-262` with isolated declarations.
- Submitted exactly one candidate. It failed compilation because the declaration set omitted `operator+(const stringx&, const stringx&)`; no further attempt was made.
- Result: `source_pending`, score 0.0.

## Outcome

The exact released vector XY normalization script function failed to compile in the isolated bench; no variant was attempted.
