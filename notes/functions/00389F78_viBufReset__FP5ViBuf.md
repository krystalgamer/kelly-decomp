# viBufReset__FP5ViBuf

- Address: `0x00389F78`
- Size: `0x160` (352 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 48 lane A4 for `0x00389F78 viBufReset__FP5ViBuf`.
- Tested the exact released `viBufReset` body once with minimal self-contained declarations for `ViBuf`, `TimeStamp`, `QWORD`, DMA constants/registers, `DmaAddr`, `scTag2`, and `setD4_CHCR`.
- Result: **compile_failed**, score **0.0%**. The legacy compiler rejected the isolated declarations because the two released static helper functions were declared and used but not defined.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:147-175`
- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:647-650`
- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:1565-1578`
- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:1597-1626`
- `tmp/functions/00389F78_viBufReset__FP5ViBuf/attempt-1/compiler.stderr`
- `tmp/functions/00389F78_viBufReset__FP5ViBuf/attempt-1/result.json`

## Outcome

The exact released video-buffer reset failed the isolated compile; the sole attempt scored 0%.
