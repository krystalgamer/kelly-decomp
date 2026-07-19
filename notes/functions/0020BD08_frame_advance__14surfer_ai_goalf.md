# frame_advance__14surfer_ai_goalf

- Address: `0x0020BD08`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_ai_goals.cpp`
- Reference source: `KS/SRC/ks/kellyslater_ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released goal method forwards to `ai_goal::frame_advance`; retaining the float result across a barrier preserves the wrapper.

## Outcome

The released `surfer_ai_goal::frame_advance` forwarding wrapper matched exactly on the first attempt.
