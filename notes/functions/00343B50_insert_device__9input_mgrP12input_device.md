# insert_device__9input_mgrP12input_device

- Address: `0x00343B50`
- Size: `0x1FC` (508 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.0157 | 8.6614 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave95 A1

- Target: `0x00343B50 insert_device__9input_mgrP12input_device` (508 / `0x1FC`), `game/files_vsim`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/inputmgr.cpp:267-282`.
- Confirmed attempts0 before preparation/testing (`not prepared`).
- Candidate: LF-only exact released body with minimal faithful self-contained declarations and no headers.
- Sole attempt: `different`; byte score 24.0157% (122/508), instruction score 8.6614% (11/127); candidate 452 bytes, target 508 bytes.
- Candidate SHA-1: `0483ed7dc68159045fd8e13ffd4a460e5756eb1c`.
- Exactly one candidate and one harness invocation. No retry, alternatives, chase, build, finalize, integration, git mutation, or tracked edits.

## Outcome

The exact released input-device insertion body differed at 24.0157% byte score; no source variant was attempted.
