# __cl__16slf_to_str_int_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00321D50`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.945 | 1.8349 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass

- Target: `0x00321D50` `__cl__16slf_to_str_int_tR8vm_stackQ320script_library_class8function7entry_t`, object `game/files_script`, expected size 436 (`0x1B4`). Metadata: `notes/function_queue.csv:6465` and `config/SLUS_203.34.symbol_addrs.txt:5797`.
- Released body copied exactly from `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2299-2311`; declarations follow `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2285-2296`. SLF behavior follows `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:264-295`.
- Target metadata/assembly inspected only at `tmp/functions/00321D50___cl__16slf_to_str_int_tR8vm_stackQ320script_library_class8function7entry_t/metadata.json` and `tmp/functions/00321D50___cl__16slf_to_str_int_tR8vm_stackQ320script_library_class8function7entry_t/target.s` to select faithful declarations/layout.
- Sole invocation: `env/bin/python tools/function_test.py test 0x00321D50`.
- Result: **different**; byte score **8.9450%** (39/436), instruction score **1.8349%** (2/109), target size **436**, candidate size **200**.
- Candidate SHA-1: `cb428aa7551dd88dfdde286b32f987db52c57c6f`.
- UTC: start `2026-07-28T18:23:09Z`, end `2026-07-28T18:25:12Z`, elapsed 123s.
- Exactly one attempt and one harness invocation. No retry, finalize, integrate, configure, build, ninja, manifest mutation, or tracked-file edit.

## Outcome

The exact released integer-to-string script conversion body differed at 8.9450% byte score; no source variant was attempted.
