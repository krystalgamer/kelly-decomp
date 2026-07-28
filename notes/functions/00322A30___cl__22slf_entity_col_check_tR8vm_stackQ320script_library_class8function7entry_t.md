# __cl__22slf_entity_col_check_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00322A30`
- Size: `0x1A0` (416 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.619 | 38.6792 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 73 lane A4 — 0x00322A30

- Confirmed there were no prior attempts.
- Copied the exact active released `slf_entity_col_check_t::operator()` body from `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2508-2516`.
- Added minimal self-contained declarations preserving VM entity/number types, stack operations, disabled profiler calls, world collision call, and `SLF_RETURN`/`SLF_DONE` behavior.
- Ran `function_test` exactly once. Result: `different`, byte score 47.6190%, instruction score 38.6792%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, tool edits, subagents, lean work, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2492-2517`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:264-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-64`
- `kelly-slaters-pro-surfer/KS/SRC/profiler.h:335-345`
- `kelly-slaters-pro-surfer/KS/SRC/wds.h` (`entity_entity_collision_check` declaration)
- `tmp/functions/00322A30___cl__22slf_entity_col_check_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released entity collision-check script function differed at 47.6190% byte score; no source variant was attempted.
