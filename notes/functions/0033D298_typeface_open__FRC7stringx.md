# typeface_open__FRC7stringx

- Address: `0x0033D298`
- Size: `0x10C` (268 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.0746 | 14.9254 | `candidate.cpp` |

### Attempt 1 notes

First-pass source-faithful attempt used the exact released function body with minimal self-contained declarations for stringx, typeface_def, the SGI-style list node insertion, allocator free list, and target symbols.

The candidate compiled and emitted the requested symbol, but did not match: 94/268 bytes and 10/67 instructions matched; candidate size was 236 bytes versus 268 target bytes. Per first-pass rules, no declaration variants or diff-driven follow-up were attempted.

## Outcome

The exact released typeface opener differed from the target; the sole attempt scored 35.0746%.
