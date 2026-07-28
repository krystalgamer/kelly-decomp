# __cl__27slf_beam_add_width_effect_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00326650`
- Size: `0x194` (404 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_beam.cpp`
- Reference source: `KS/SRC/script_lib_beam.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave69 lane B5 for `0x00326650 __cl__27slf_beam_add_width_effect_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_beam_add_width_effect_t::operator()` body once with minimal self-contained declarations for `beam`, the VM stack/thread types, `stringx`, and the script-library base interface.
- Result: **symbol_missing**, score **0.0%**. The compiler emitted no externally visible function because the inline virtual definition was not instantiated in isolation.
- Exactly one candidate was tested. No variants, retries, diff chasing, finalization, build, integration, tracked-file edits, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_beam.cpp:562-594`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-70`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_beam.h:11`
- `kelly-slaters-pro-surfer/KS/SRC/beam.h:97`
- `tmp/functions/00326650___cl__27slf_beam_add_width_effect_tR8vm_stackQ320script_library_class8function7entry_t/attempts.json`

## Outcome

The exact released beam width-effect script function emitted no target symbol; no source variant was attempted.
