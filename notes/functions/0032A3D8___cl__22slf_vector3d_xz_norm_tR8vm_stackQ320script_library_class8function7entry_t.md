# __cl__22slf_vector3d_xz_norm_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032A3D8`
- Size: `0x180` (384 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Reproduced the released `slf_vector3d_xz_norm_t::operator()` body with minimal stack, vector, and script declarations. The sole candidate compiled, but the isolated object emitted no function symbol, so the attempt is `symbol_missing` with score 0 and remains `source_pending`.

## Outcome

The exact released vector XZ normalization script function emitted no target symbol; no variant was attempted.
