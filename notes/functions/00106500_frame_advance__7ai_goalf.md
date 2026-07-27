# frame_advance__7ai_goalf

- Address: `0x00106500`
- Size: `0x104` (260 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Released-source candidate was tested once and failed compilation because the legacy compiler could not find list.h or assert.h. No retry was made.

## Outcome

The exact released AI-goal frame advance failed the isolated compile because the released STL and assert headers were unavailable; the sole attempt scored 0%.
