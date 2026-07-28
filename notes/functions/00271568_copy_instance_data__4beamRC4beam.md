# copy_instance_data__4beamRC4beam

- Address: `0x00271568`
- Size: `0x164` (356 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.8539 | 4.4944 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 49 lane A5 for `0x00271568 copy_instance_data__4beamRC4beam`.
- Tested the exact released `beam::copy_instance_data` body once with minimal self-contained declarations preserving the released entity base call, beam fields and accessors, material instance bank, beam-effect cloning, and three-pointer vector interface.
- Result: **different**, byte score **16.8539%** (60/356) and instruction score **4.4944%** (4/89); candidate size 276 bytes versus target size 356 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/beam.cpp:103-126`
- `kelly-slaters-pro-surfer/KS/SRC/beam.h:22-98,410-470`
- `kelly-slaters-pro-surfer/KS/SRC/instance.h:45-78`
- `tmp/functions/00271568_copy_instance_data__4beamRC4beam/attempt-1/result.json`

## Outcome

The exact released beam instance-data copy differed from the target; the sole attempt scored 16.8539%.
