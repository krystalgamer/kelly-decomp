# GetCompStrTotal__C11IGOFrontEndi

- Address: `0x0017DB48`
- Size: `0x19C` (412 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.9709 | 9.7087 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 71 lane B1 — 0x0017DB48

- Confirmed there were no prior attempts.
- Tested the exact released `IGOFrontEnd::GetCompStrTotal(const int) const` body once with minimal self-contained declarations preserving the relevant `game`, `JudgingSystem`, and `beach` layouts.
- Result: **different**, byte score **25.9709%** (107/412), instruction score **9.7087%** (10/103); candidate size 408 bytes versus target size 412 bytes.
- No variants, retries, disassembly comparison, diff chasing, build, finalization, integration, tracked-file edits, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/IGOFrontEnd.cpp:3626-3637`
- `kelly-slaters-pro-surfer/KS/SRC/ks/judge.h:15-40,43-47,67`
- `kelly-slaters-pro-surfer/KS/SRC/ks/beach.h:16-29,81`
- `kelly-slaters-pro-surfer/KS/SRC/game.h:540-551`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-285`
- `tmp/functions/0017DB48_GetCompStrTotal__C11IGOFrontEndi/attempt-1/result.json`

## Outcome

The exact released competition-string total query differed at 25.9709% byte score; no source variant was attempted.
