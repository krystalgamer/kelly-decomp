# __cl__17slf_systime_day_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00324010`
- Size: `0x15C` (348 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 44 lane A5 for `0x00324010`.
- Tested the exact released `slf_systime_day_t::operator()` class/body once, with minimal declarations for `game`, `sys_time_stuct`, VM stack, and script-library base interfaces.
- Result: **symbol_missing**, score **0.0%**. The compiler emitted no externally visible function because this inline virtual definition was not instantiated in isolation.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:3023-3038`
- `kelly-slaters-pro-surfer/KS/SRC/game.h:104-113,333,538`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,279-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-58`
- `tmp/functions/00324010___cl__17slf_systime_day_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released system-day script operator emitted no target symbol in the isolated bench; the sole attempt scored 0%.
