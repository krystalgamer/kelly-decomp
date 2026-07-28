# WAVE_Init__Fv

- Address: `0x00373598`
- Size: `0x1B8` (440 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.3182 | 36.3636 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass

- Target: `0x00373598` `WAVE_Init__Fv`, object `game/files_wave`, expected size 440 (`0x1B8`). Metadata: `notes/function_queue.csv:6473` and `config/SLUS_203.34.symbol_addrs.txt:7308`.
- Released body copied unchanged from `historicalsource/kelly-slaters-pro-surfer@7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`, `KS/SRC/ks/wave.cpp:1240-1285`.
- Faithful declarations derive from released `KS/SRC/ks/wavetex.h:29,56-65,88`, `KS/SRC/ks/beachdata.h:62-68`, and body/file globals in `KS/SRC/ks/wave.cpp:91-110,183-197` at the same commit.
- Target metadata and assembly were inspected before testing at `tmp/functions/00373598_WAVE_Init__Fv/metadata.json` and `tmp/functions/00373598_WAVE_Init__Fv/target.s`.
- Sole invocation: `python3 tools/function_test.py test 0x00373598 --candidate tmp/source-first-wave79/B2-00373598/candidate.cpp`.
- Result: **different**; byte score **39.3182%** (173/440), instruction score **36.3636%** (40/110), target size **440**, candidate size **408**.
- Candidate SHA-1: `b00959d4ed690b314407824802db3d2c7bc1b78d`; SHA-256: `74f949f4be4a84c7e1298c78d035a388550736a7646dad8e401068152cead9ce`.
- UTC: start `2026-07-28T19:00:35Z`, end `2026-07-28T19:05:22Z`, elapsed 287s.
- Exactly one isolated released-body candidate and one harness invocation. No alternate implementation, retry, variant, post-test diff chase, asm/matching annotation, finalize, integrate, manifest mutation, configure, build, ninja, git mutation, or tracked-file edit.

## Outcome

The exact released wave initialization body differed at 39.3182% byte score; no source variant was attempted.
