# __cl__18slf_systime_year_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003243B0`
- Size: `0x15C` (348 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.2697 | 12.2222 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 44 lane B2 for `0x003243B0 __cl__18slf_systime_year_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_systime_year_t::operator()` body once with minimal declarations preserving the released VM number, system-time layout, game accessor, VM stack, script-library interfaces, and `SLF_RETURN`/`SLF_DONE` behavior.
- Result: **different** — 122/356 compared bytes (34.2697%) and 11/90 instructions (12.2222%); candidate size 356 versus target size 348.
- Exactly one non-placeholder candidate was tested. No variants, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:3057-3072`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-59,282-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:6-10,21-64`
- `kelly-slaters-pro-surfer/KS/SRC/game.h:104-113,333`
- `tmp/functions/003243B0___cl__18slf_systime_year_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released system-year script operator differed from the target; the sole attempt scored 34.2697%.
