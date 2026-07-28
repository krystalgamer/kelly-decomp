# __cl__21slf_vector3d_length_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00329E08`
- Size: `0x18C` (396 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **compile_failed**
- Score: **0.0000%**
- Used the exact released `slf_vector3d_length_t::operator()` body with minimal declarations.
- Compilation failed because the released `SLF_RETURN` expansion requires additional diagnostic-chain declarations (`vm_stack::get_thread`, `error`).
- No retry, variant, disassembly comparison, diff chase, build, finalization, integration, commit, or tracked-file edit was performed.

## Outcome

The exact released vector-length script function failed to compile in the isolated bench; no source variant was attempted.
