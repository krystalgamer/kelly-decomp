# nslFrameAdvance__Ff

- Address: `0x00390068`
- Size: `0x1BC` (444 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.1802 | 44.1441 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 80 lane A5 — nslFrameAdvance__Ff

Attempt 1 used the exact released function body unchanged with minimal self-contained declarations and no unavailable project headers. It compiled to 436 bytes versus the 444-byte target and did not match: byte score 55.1802% (245/444), instruction score 44.1441% (49/111). Candidate SHA-256: `87b949154865bef81292d843841b58b1b01eb26f8b5e1849806516a1dd41b12f`; reference SHA-256: `c8c0e22f3f1e9df5e66ce246f4434f07a3f4aa3d70b46388cec67b75da5781da`. Test duration: 1.589541s.

Citations: `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2.cpp:386-456`; `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2.h:53-76,156-192,219-268,380-383`; `kelly-slaters-pro-surfer/NSL/PS2/gas.h:19,44-66,113`; `kelly-slaters-pro-surfer/NSL/PS2/fifo_queue.h:6-25`; `tmp/target-full-disasm.txt:684829-684940`; `tmp/functions/00390068_nslFrameAdvance__Ff/attempt-1/result.json`.

No retry, variant, alternate implementation, manual assembly, annotation, diff chase, finalize, integration, or manifest action was performed. Tracked files changed: false. Finalized: false. Integrated: false.

## Outcome

The exact released NSL frame-advance body differed at 55.1802% byte score; no source variant was attempted.
