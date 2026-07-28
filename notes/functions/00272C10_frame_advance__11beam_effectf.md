# frame_advance__11beam_effectf

- Address: `0x00272C10`
- Size: `0x1D8` (472 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.5847 | 27.9661 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass

- Target: `0x00272C10` `frame_advance__11beam_effectf`, object `game/files_misc1`, expected size 472 (`0x1D8`).
- Released body copied exactly from `kelly-slaters-pro-surfer/KS/SRC/beam.cpp:743-788`; minimal faithful declarations follow `kelly-slaters-pro-surfer/KS/SRC/beam.h:210-225,411-470` without unavailable headers.
- Confirmed `tmp/functions/00272C10_frame_advance__11beam_effectf` did not exist before preparation and prepared attempt history was `[]`.
- Sole invocation: `env/bin/python tools/function_test.py test 0x00272C10 --candidate tmp/source-first-wave87/A5-00272C10/candidate.cpp`.
- Result: **different**; byte score **42.5847%** (201/472), instruction score **27.9661%** (33/118), target size **472**, candidate size **464**.
- Candidate SHA-1: `57cd3ae1704bacc9024928c653abeb93bded0d6e`.
- Exactly one attempt and one harness invocation. No retry, alternate, asm, annotation, variant, finalize, integrate, build, or tracked/reference edit.

## Outcome

The exact released beam-effect frame-advance body differed at 42.5847% byte score; no source variant was attempted.
