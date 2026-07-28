# nvlMPEGAdvance__Fv

- Address: `0x003881B0`
- Size: `0x184` (388 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.9072 | 12.3711 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 65 lane A2 for `0x003881B0 nvlMPEGAdvance__Fv` (388 bytes, `NVL/PS2/nvlMPEG_ps2.cpp`).
- Tested exactly one exact released body with minimal faithful declarations for the MPEG, file, read-buffer, audio-decoder, and video-output types and referenced globals/functions.
- Result: **different**, byte score **21.9072%** (85/388) and instruction score **12.3711%** (12/97); candidate and target sizes are both 388 bytes.
- No variants, retries, diff chasing, tracked-file edits, finalize/integrate, ROM build, commit, or git mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:42-82,180-279,598-635`
- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.h:24`
- `tmp/functions/003881B0_nvlMPEGAdvance__Fv/attempt-1/result.json`

## Outcome

The exact released NVL MPEG advance differed at 21.9072% byte score; no source variant was attempted.
