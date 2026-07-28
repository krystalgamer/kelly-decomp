# __cl__20slf_beam_hit_world_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00325328`
- Size: `0x18C` (396 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_beam.cpp`
- Reference source: `KS/SRC/script_lib_beam.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.75 | 37.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimum faithful declarations

- FIRST PASS wave67 A5 for `0x00325328 __cl__20slf_beam_hit_world_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_beam_hit_world_t::operator()` body once with minimum faithful beam, VM stack, script-library, and string declarations.
- Result: **different**, byte score **46.75%** (187/400) and instruction score **37.0%** (37/100); candidate size 400 bytes versus target size 396 bytes.
- Exactly one non-placeholder candidate was tested. No variants, retries, diff chasing, build, finalization, integration, tracked-file edits, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_beam.cpp:48-72`
- `kelly-slaters-pro-surfer/KS/SRC/beam.h:23-112`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-93`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:270-300`
- `tmp/functions/00325328___cl__20slf_beam_hit_world_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released beam-world-hit script function differed at 46.7500% byte score; no source variant was attempted.
