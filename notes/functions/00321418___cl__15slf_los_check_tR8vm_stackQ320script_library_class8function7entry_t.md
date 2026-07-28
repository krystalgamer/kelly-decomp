# __cl__15slf_los_check_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00321418`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave75 lane A4 for `0x00321418 __cl__15slf_los_check_tR8vm_stackQ320script_library_class8function7entry_t`.
- Candidate uses the exact released `slf_los_check_t::operator()` body with only minimal self-contained declarations and macro expansions.
- Result: **compile_failed**, score **0.0%**; the minimal declaration set did not define `NULL`.
- Source citation: `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2055-2101`.
- Result citation: `tmp/functions/00321418___cl__15slf_los_check_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`.
- Exactly one test is permitted; no variants, retries, diff chase, finalization, build, integration, tracked/reference edits, commit, or push.

## Outcome

The exact released line-of-sight script check failed to compile in the isolated bench; no source variant was attempted.
