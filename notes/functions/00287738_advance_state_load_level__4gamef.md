# advance_state_load_level__4gamef

- Address: `0x00287738`
- Size: `0x1F8` (504 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game_process.cpp`
- Reference source: `KS/SRC/game_process.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.2302 | 16.6667 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave94 A5

- Target: `0x00287738 advance_state_load_level__4gamef` (504 / `0x1F8`), `game/files_misc1`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/game_process.cpp:411-488`.
- Confirmed attempts0 before preparation/testing (`attempts.json` was `[]`).
- Candidate: LF-only exact released body with minimal self-contained declarations.
- Sole attempt: `different`; byte score 21.2302% (107/504), instruction score 16.6667% (21/126); candidate 384 bytes, target 504 bytes.
- Candidate SHA-1: `017646a9297125efae13c47cfcc978a358d46be4`.
- Exactly one candidate and one harness invocation. No retry, variants, post-test chase, build, finalize, integration, git mutation, or tracked edits.

Packet files:
candidate.cpp
checksums.txt
metadata.json
notes.md
result.json

## Outcome

The exact released level-load state advance body differed at 21.2302% byte score; no source variant was attempted.
