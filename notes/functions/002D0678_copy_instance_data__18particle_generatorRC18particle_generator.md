# copy_instance_data__18particle_generatorRC18particle_generator

- Address: `0x002D0678`
- Size: `0x1AC` (428 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.3271 | 2.9703 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 76 lane B2 — 0x002D0678

- Confirmed there were no prior attempts.
- Copied the exact released `particle_generator::copy_instance_data` body from `kelly-slaters-pro-surfer/KS/SRC/particle.cpp:722-775`.
- Added minimal self-contained declarations preserving released member offsets and call shapes.
- Ran `function_test` exactly once. Result: **different**, byte score **20.3271%**, instruction score **2.9703%**.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, tool edits, subagents, lean work, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/particle.cpp:722-775`
- `kelly-slaters-pro-surfer/KS/SRC/particle.h:68-212`
- `tmp/functions/002D0678_copy_instance_data__18particle_generatorRC18particle_generator/attempt-1/result.json`

## Outcome

The exact released particle-generator instance-data copy differed at 20.3271% byte score; no source variant was attempted.
