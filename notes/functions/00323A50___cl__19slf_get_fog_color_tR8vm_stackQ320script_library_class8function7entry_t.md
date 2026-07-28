# __cl__19slf_get_fog_color_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00323A50`
- Size: `0x1BC` (444 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass wave 80 lane A2

- Target: `0x00323A50` `__cl__19slf_get_fog_color_tR8vm_stackQ320script_library_class8function7entry_t`; object `game/files_script`; target size 444 (`0x1BC`) bytes.
- Exact released operator body: `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2971-2986` (body at lines 2979-2985), preserved unchanged in the candidate.
- Faithful declaration citations: `singleton.h:8-78`, `fogmgr.h:14-43`, `color.h:153-176`, `HWOSPS2/ps2_algebra.h:292-307`, `vm_stack.h:21-87`, and `script_library_class.h:24-65,279-300` under the released source tree.
- Target assembly was consulted before testing at `tmp/target-full-disasm.txt:570605-570709` to guide declarations.
- Candidate: self-contained translation unit with minimal declarations and no project headers.
- Sole invocation: `env/bin/python tools/function_test.py test 0x00323A50 --candidate tmp/source-first-wave80/A2-00323A50/candidate.cpp`.
- Result: **symbol_missing**, score 0.0; the candidate emitted no discoverable function symbols.
- Candidate SHA-1: `d4c760ec8016134167a35019efd56fa968a284d7`; SHA-256: `25f0e710c8e0694cf4dbe31b429b411dc3b74db1dc27f3e7197114b0397c0480`.
- UTC timing: `2026-07-28T19:46:10Z` to `2026-07-28T19:48:34Z`; duration 144 seconds.
- One-shot statement: exactly one honest attempt and one harness invocation were performed. No alternate source, matching annotations, variant, retry, attempts 2-5, post-test diff chase, finalize, integration, match_manifest, build/configure/ninja, tracked edit, commit, or git mutation was performed.

## Outcome

The exact released fog-color script candidate compiled without emitting the target symbol; no source variant was attempted.
