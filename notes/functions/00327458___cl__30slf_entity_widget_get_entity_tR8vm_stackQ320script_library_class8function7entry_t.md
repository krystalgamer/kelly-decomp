# __cl__30slf_entity_widget_get_entity_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00327458`
- Size: `0x158` (344 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_entity_widget.cpp`
- Reference source: `KS/SRC/script_lib_entity_widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.9186 | 63.9535 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **different**
- Byte score: **61.9186%** (213/344 bytes)
- Instruction score: **63.9535%** (55/86 instructions)
- Candidate and target sizes: **344 bytes**
- Used the exact released `slf_entity_widget_get_entity_t::operator()` body with only declarations and released inline behavior required for isolated compilation.
- No variants, diff chasing, build, finalization, integration, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_entity_widget.cpp:50-70` — released class, parameter, and function body.
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:262-300` — released `SLF_PARMS`, `SLF_RETURN`, and `SLF_DONE` expansions.
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-72` — released stack layout and inline access/pop behavior.
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:484-520` — released inline string concatenation behavior.
- `kelly-slaters-pro-surfer/KS/SRC/widget_entity.h:55` — released inline `get_ent()` behavior.
- `tmp/functions/00327458___cl__30slf_entity_widget_get_entity_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json` — isolated non-placeholder test result.

## Outcome

The exact released entity-widget entity getter differed from the target; the sole attempt scored 61.9186%.
