# WAVE_SubdivideGrid__FPC13WavePartitionPfUi

- Address: `0x00378FB0`
- Size: `0x164` (356 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.5806 | 4.3011 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 50 lane A5 for `0x00378FB0 WAVE_SubdivideGrid__FPC13WavePartitionPfUi`.
- Tested the exact released `WAVE_SubdivideGrid` body once with minimal self-contained declarations for `u_int`, `WavePartition`, and the retail no-op `assert` macro.
- Result: **different**, byte score **22.5806%** (84/372) and instruction score **4.3011%** (4/93); candidate size 372 bytes versus target size 356 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/wave.cpp:350-359,4233-4280`
- `tmp/functions/00378FB0_WAVE_SubdivideGrid__FPC13WavePartitionPfUi/attempt-1/result.json`

## Outcome

The exact released wave-grid subdivision differed from the target; the sole attempt scored 22.5806%.
