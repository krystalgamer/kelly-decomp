# __cl__22slf_entity_list_rend_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00332F70`
- Size: `0x15C` (348 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# First-pass notes

- Tested the exact released `slf_entity_list_rend_t::operator()` body once, with only its class wrapper and required released declarations supplied through headers.
- Non-placeholder candidate behavior: pop `parms_t`, obtain `me->begin()`, decrement the iterator, push the result, and return `true`.
- Result: `compile_failed` before code generation because the isolated compiler include roots contain only `include/` and `src/`; released headers (`global.h`, `script_lib_list.h`, `vm_stack.h`, `vm_thread.h`) are intentionally outside those roots.
- No variant or follow-up attempt was made.

## Outcome

The exact released entity-list reverse-end operator failed the isolated compile; the sole attempt scored 0%.
