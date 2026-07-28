# __cl__19slf_num_list_size_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00330F48`
- Size: `0x198` (408 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.8627 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 70 lane B3 — 0x00330F48

- Confirmed there were no prior attempts.
- Copied the exact active released `slf_num_list_size_t::operator()` body from `script_lib_list.cpp`.
- Added minimal self-contained declarations for the numeric list, VM stack, error path, and script-library base interface.
- Ran `function_test` exactly once. Result: `different`, byte score 6.8627%, instruction score 0.0000%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, tool edits, subagents, lean work, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:541-562`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:44-70`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,264-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-93`
- `tmp/functions/00330F48___cl__19slf_num_list_size_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`
- `tmp/source_first/00330F48/attempt-1.md`

## Outcome

The exact released numeric-list size script function differed at 6.8627% byte score; no source variant was attempted.
