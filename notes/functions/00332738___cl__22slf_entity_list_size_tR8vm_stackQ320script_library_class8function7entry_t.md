# __cl__22slf_entity_list_size_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00332738`
- Size: `0x198` (408 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 70 lane B4 — 0x00332738

- Status: **source_pending** (`compile_failed`)
- Attempts: **1**
- Byte score: **0.0000%**
- Instruction score: **0.0000%**
- Candidate: `tmp/functions/00332738___cl__22slf_entity_list_size_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/candidate.cpp`
- SHA-1: `dd6782ee6da818a3fbc7684e2e750326510e1da0`
- Started: `2026-07-28T13:35:26.836532673Z`
- Completed: `2026-07-28T13:38:21.892442Z`

Attempt 1 used the exact released `slf_entity_list_size_t::operator()` body with minimal declarations. Compilation failed because the minimal declarations omitted the released `operator+(const stringx&, const char*)` overload required by `SLF_RETURN`. Per first-pass rules, the failed candidate is preserved and no retry, variant, or diff chase was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:881-900`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:87-101`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:264-299`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-83`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-310,485-519`
- `tmp/functions/00332738___cl__22slf_entity_list_size_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`
- `tmp/functions/00332738___cl__22slf_entity_list_size_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/compiler.stderr`

## Outcome

The exact released entity-list size script function failed to compile in the isolated bench; no source variant was attempted.
