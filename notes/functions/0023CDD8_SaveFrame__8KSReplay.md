# SaveFrame__8KSReplay

- Address: `0x0023CDD8`
- Size: `0x1F0` (496 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.3548 | 0.8065 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave92 A5
Target: 0x0023CDD8 SaveFrame__8KSReplay (496/0x1F0), game/files_kellyslater
Reference: kelly-slaters-pro-surfer/KS/SRC/ks/ksreplay.cpp:1089-1143
Confirmed attempts0 before preparation/testing.
Candidate: LF-only exact released body with minimal faithful self-contained declarations and no includes.
Sole attempt: different; byte score 19.3548% (96/496), instruction score 0.8065% (1/124); candidate size 488 bytes, target size 496 bytes.
Candidate SHA-1: 9d0a176a515363542b32f5ae6cfb8299bc684cbc
Exactly one candidate and one harness invocation. No alternatives, asm, annotations, variants, retry, attempts 2-5, or post-test chase.
Tracked/reference files remained read-only. Packet false; not finalized or integrated. No build or git mutation.

## Outcome

The exact released replay-frame save body differed at 19.3548% byte score; no source variant was attempted.
