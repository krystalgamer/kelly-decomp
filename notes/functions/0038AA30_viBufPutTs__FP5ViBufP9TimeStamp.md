# viBufPutTs__FP5ViBufP9TimeStamp

- Address: `0x0038AA30`
- Size: `0x110` (272 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released `viBufPutTs` body with the minimal authentic `TimeStamp`, `ViBuf`, DMA-environment, semaphore, and helper declarations. The isolated compile rejected the released static `viBufModifyPts` declaration because its definition was not present; no alternate source was tested.

## Outcome

The exact released video-buffer timestamp insertion failed the isolated compile because its released static helper was unavailable; the sole attempt scored 0%.
