# reload__4Font

- Address: `0x0033A638`
- Size: `0x1FC` (508 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.0236 | 4.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave94 B5

- Target: `0x0033A638 reload__4Font` (508 / `0x1FC`), `game/files_vsim`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/text_font.cpp:410-429`.
- Confirmed attempts0 before preparation/testing (`not prepared`).
- Candidate: LF-only exact released body with minimal faithful self-contained declarations and no headers.
- Sole attempt: `different`; byte score 11.0236% (56/508), instruction score 4.0000% (5/125); candidate 352 bytes, target 508 bytes.
- Candidate SHA-1: `90aef96423a8e08474ef018bb6ce9ee26065bbdc`.
- Exactly one candidate and one harness invocation. No retry, alternatives, chase, build, finalize, integration, git mutation, or tracked edits.

## Outcome

The exact released font reload body differed at 11.0236% byte score; no source variant was attempted.
