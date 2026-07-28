# __cl__18slf_vector3d_add_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003291C0`
- Size: `0x184` (388 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Status: **symbol_missing**
- Byte score: **0.0%**
- Instruction score: **0.0%**
- Tested exactly one source-faithful body with minimum declarations for `vector3d`, `vm_stack`, and `script_library_class::function`.
- Compilation succeeded, but the isolated compiler emitted no discoverable function symbol, so no byte comparison was possible.
- No variants, retries, diff chasing, normalization, tracked-file edits, finalization, integration, ROM build, commit, or git mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_vector3d.cpp:55-72` — released class parameters and exact operator body.
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_algebra.h:292-305,371-372` — released vector layout, constructors, and addition operator.
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:25-64,270-300` — released entry type and SLF macro expansions.
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-66` — released stack layout and accessors.
- `tmp/functions/003291C0___cl__18slf_vector3d_add_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json` — isolated test result.

## Outcome

The exact released vector-add script function emitted no target symbol; no source variant was attempted.
