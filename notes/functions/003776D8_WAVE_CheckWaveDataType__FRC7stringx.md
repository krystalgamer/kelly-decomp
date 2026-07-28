# WAVE_CheckWaveDataType__FRC7stringx

- Address: `0x003776D8`
- Size: `0x164` (356 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.0674 | 40.4494 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 50 lane A4 for `0x003776D8 WAVE_CheckWaveDataType__FRC7stringx`.
- Tested the exact released `WAVE_CheckWaveDataType` body once with minimal self-contained declarations preserving `stringx` construction, assignment, uppercase conversion, inline equality, `WaveData`/`BeachData` strides, globals, and the beach-id offset.
- Result: **different**, byte score **46.0674%** (164/356) and instruction score **40.4494%** (36/89); candidate size 356 bytes, equal to the 356-byte target.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/wave.cpp:3174-3212`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:56-78,193-202,230-236,456-459`
- `kelly-slaters-pro-surfer/KS/SRC/ks/wavedata.h:7-43`
- `kelly-slaters-pro-surfer/KS/SRC/ks/beachdata.h:7-35`
- `tmp/functions/003776D8_WAVE_CheckWaveDataType__FRC7stringx/attempt-1/result.json`

## Outcome

The exact released wave-data type checker differed from the target; the sole attempt scored 46.0674%.
