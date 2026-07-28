# __cl__32slf_timer_widget_get_time_left_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032C1A8`
- Size: `0x158` (344 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- FIRST PASS wave 42 lane A4 for `0x0032C1A8`.
- Tested the exact released `slf_timer_widget_get_time_left_t::operator()` body once with minimal declarations preserving the released VM stack operations, timer-widget pointer parameter, `time_left` access, return push, and retail overflow path.
- Result: **symbol_missing**, score **0.0000**. The candidate compiled, but the isolated object emitted no discoverable function symbol.
- No variants, retries, diff chasing, build, finalization, integration, tracked writes, tool edits, subagents, lean work, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_widget.cpp:316-336`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_widget.h:37-48`
- `kelly-slaters-pro-surfer/KS/SRC/widget_script.h:36-64`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:22-61,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:9-12,21-58`
- `tmp/functions/0032C1A8___cl__32slf_timer_widget_get_time_left_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released timer time-left operator emitted no target symbol in the isolated bench; the sole attempt scored 0%.
