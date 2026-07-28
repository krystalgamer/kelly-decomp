# nglCreateTexture__FUiUiUi

- Address: `0x0039CB38`
- Size: `0x198` (408 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.902 | 9.8039 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 71 lane A4 — 0x0039CB38

- Tested the exact released `nglCreateTexture(u_int, u_int, u_int)` body once with minimal self-contained declarations preserving `nglTexture` size and accessed member offsets.
- Result: **different**; byte score **29.9020%** (122/408), instruction score **9.8039%** (10/102).
- Candidate size: **396 bytes**; target size: **408 bytes**.
- No variants, retries, disassembly comparison, diff chasing, build, finalization, integration, commit, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:3666-3724`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.h:465-591`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2_internal.h:357-358`
- `tmp/functions/0039CB38_nglCreateTexture__FUiUiUi/attempt-1/result.json`

## Outcome

The exact released NGL texture creation differed at 29.9020% byte score; no source variant was attempted.
