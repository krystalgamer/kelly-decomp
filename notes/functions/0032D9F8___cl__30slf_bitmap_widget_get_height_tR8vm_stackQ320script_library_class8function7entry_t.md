# __cl__30slf_bitmap_widget_get_height_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032D9F8`
- Size: `0x168` (360 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 52 lane A2 for `0x0032D9F8 __cl__30slf_bitmap_widget_get_height_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_bitmap_widget_get_height_t::operator()` body once with minimal self-contained declarations for the script-library function base, VM stack/thread interfaces, `bitmap_widget`, and released VM typedefs.
- Result: **symbol_missing**, score **0.0%**. The candidate compiled successfully, but the isolated translation unit emitted no externally visible function because the released in-class virtual definition was not instantiated.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_widget.cpp:1048-1069`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_widget.h:92-105`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-83`
- `kelly-slaters-pro-surfer/KS/SRC/widget.h:481-503`
- `tmp/functions/0032D9F8___cl__30slf_bitmap_widget_get_height_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released bitmap-height script getter emitted no target symbol in the isolated bench; the sole attempt scored 0%.
