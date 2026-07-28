# __cl__26slf_create_entity_widget_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00327230`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_entity_widget.cpp`
- Reference source: `KS/SRC/script_lib_entity_widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass wave 78 lane B5

- Target: `0x00327230` `__cl__26slf_create_entity_widget_tR8vm_stackQ320script_library_class8function7entry_t`; object `game/files_script`; target size 436 (`0x1B4`) bytes.
- Released body: `kelly-slaters-pro-surfer/KS/SRC/script_lib_entity_widget.cpp:34-55`.
- Faithful declarations: `kelly-slaters-pro-surfer/KS/SRC/script_lib_entity_widget.h:8-26`, `widget_entity.h:21-67`, `widget.h:173-329`, `vm_stack.h:7-104`, `script_library_class.h:20-55,264-301`, `game.h:169-176`, and `stringx.h:360-390,400-519`.
- Candidate: one self-contained translation unit preserving the exact released operator body and supplying only declarations/layouts and released inline helpers/macros needed by it.
- Sole invocation: `env/bin/python tools/function_test.py test 0x00327230`.
- Result: `symbol_missing`; score `0.0`; byte/instruction scores and candidate emitted size unavailable because no target symbol was emitted. Target size: 436 bytes.
- Error: Candidate did not emit __cl__26slf_create_entity_widget_tR8vm_stackQ320script_library_class8function7entry_t; emitted functions: []
- Candidate SHA-1: `2c3e9a97e336f82460e29fa903e727775efac3b5`; SHA-256: `17ea760935e716992e81574d7c8f372a6c88f24cc526644b2fdc821bd228427b`.
- UTC start: `2026-07-28T18:25:12Z`; UTC end: `2026-07-28T18:27:48Z`; duration: `156` seconds.
- Exactly one attempt and one harness invocation. No retry, variant, post-test diff chase, finalize, integration, build/configure/ninja, tracked edit, commit, or other git mutation was performed.

## Outcome

The exact released entity-widget creation script candidate compiled without emitting the target symbol; no source variant was attempted.
