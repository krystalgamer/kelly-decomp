# __cl__12slf_cross3_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032AD10`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.434 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 75 lane B1 for `0x0032AD10 __cl__12slf_cross3_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact active released `slf_cross3_t::operator()` body once with minimal declarations for `vector3d`, `cross`, `vm_stack`, and the script-library function base.
- Result: **different**, byte score **9.4340%** (40/424), instruction score **0.0000%** (0/106). Candidate size was 164 bytes versus the 424-byte target.
- No variant, retry, diff chase, finalization, build, integration, tracked-file edit, commit, or push was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_vector3d.cpp:387-406`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_algebra.h:292-310,406-414`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-83`
- `tmp/functions/0032AD10___cl__12slf_cross3_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released vector cross script wrapper differed from the target; the sole attempt scored 9.4340%.

## Outcome

The exact released vector cross-product script function differed at 9.4340% byte score; no source variant was attempted.
