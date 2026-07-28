# copy_instance_data__9lensflareRC9lensflare

- Address: `0x002C28E8`
- Size: `0x168` (360 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/lensflare.cpp`
- Reference source: `KS/SRC/lensflare.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.5 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 51 lane A5 for `0x002C28E8 copy_instance_data__9lensflareRC9lensflare`.
- Tested the released `lensflare::copy_instance_data` body once with minimal self-contained declarations preserving the entity prefix, lensflare/flare field layout, `mat_fac` copy construction, released random wrapper, and base `entity::copy_instance_data` call.
- Result: **different**, byte score **12.5%** (54/432) and instruction score **0.0%** (0/108); candidate size 432 bytes versus target size 360 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/lensflare.cpp:178-202`
- `kelly-slaters-pro-surfer/KS/SRC/lensflare.h:9-48`
- `kelly-slaters-pro-surfer/KS/SRC/random.h:71-76,123-130`
- `tmp/functions/002C28E8_copy_instance_data__9lensflareRC9lensflare/attempt-1/result.json`

## Outcome

The exact released lens-flare instance copy differed from the target; the sole attempt scored 12.5%.
