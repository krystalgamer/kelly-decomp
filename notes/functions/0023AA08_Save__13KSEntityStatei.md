# Save__13KSEntityStatei

- Address: `0x0023AA08`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.7431 | 92.6606 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

- Wave/lane: released-source FIRST PASS wave 78, lane A5
- Target: `0x0023AA08 Save__13KSEntityStatei`, size 436 (`0x1B4`), object `game/files_kellyslater`
- Released body: `kelly-slaters-pro-surfer/KS/SRC/ks/ksreplay.cpp:168-191`
- Required class layout/declaration: `kelly-slaters-pro-surfer/KS/SRC/ks/ksreplay.h:39-82`
- Result: `different`; byte score 91.7431 (400/436); instruction score 92.6606 (101/109)
- Sizes: candidate 436 bytes; target 436 bytes
- Candidate SHA-1: `5e589356f5d660b2ac9341a78725be5d8fddbdd8`
- UTC start: 2026-07-28T18:21:05Z
- UTC end: 2026-07-28T18:24:20Z
- Duration: 195 seconds
- Exactly one harness invocation and one attempt; no retry, finalize, integrate, configure, ninja/full build, git mutation, or tracked-file edit.

## Outcome

The exact released replay entity-state save body differed at 91.7431% byte score; no source variant was attempted.
