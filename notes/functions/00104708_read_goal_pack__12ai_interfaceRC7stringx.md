# read_goal_pack__12ai_interfaceRC7stringx

- Address: `0x00104708`
- Size: `0x1D0` (464 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.3017 | 3.4483 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave84 B1

- Target: `0x00104708 read_goal_pack__12ai_interfaceRC7stringx`, 464 bytes (`0x1D0`), object `game/files_ai`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/ai_interface.cpp:319-337`.
- Candidate: `tmp/source-first-wave84/B1-00104708/candidate.cpp`; LF-only, self-contained minimal faithful declarations, no headers.
- Confirmed zero attempts before preparation and inspected metadata, target assembly, and candidate before testing.
- Sole result: `different`; byte score 15.3017% (71/464), instruction score 3.4483% (4/116), candidate size 404 bytes.
- Candidate SHA-1: `d481277cfb1380fa3a210c606c409ad69209b5d6`.
- Exactly one candidate and one attempt. No alternatives, asm, annotations, variants, retries, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, or git mutation.

## Outcome

The exact released AI goal-pack reader body differed at 15.3017% byte score; no source variant was attempted.
