# __cl__21slf_entity_list_end_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00332BD8`
- Size: `0x158` (344 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — setup failure preserved honestly

- FIRST PASS wave 43 lane A1 for `0x00332BD8`.
- Intended to test the exact released `slf_entity_list_end_t::operator()` body with minimal declarations using `env/bin/python` tooling.
- The candidate transformation command accidentally invoked unavailable `python` instead of `env/bin/python`, then the scripted command continued and tested the unmodified neighboring `slf_entity_list_begin_t` scaffold.
- Result: **symbol_missing**, score **0.0%**; this is not a valid target candidate result and is not claimed as an exact-source test.
- No retry or variant was attempted, preserving the single recorded attempt honestly. No diff chasing, build, finalization, integration, tracked/tool edits, subagents, lean work, commit, or push was performed.

## Citations

- Exact released target: `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:951-972`
- Released list declarations: `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:77-110`
- Base declarations: `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-52,262-300`
- VM stack declarations: `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-87`
- Recorded result: `attempt-1/result.json`

## Outcome

The exact released entity-list end operator emitted no target symbol in the isolated bench; the sole attempt scored 0%.
