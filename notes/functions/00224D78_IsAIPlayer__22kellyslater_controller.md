# IsAIPlayer__22kellyslater_controller

- Address: `0x00224D78`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Minimal public layouts preserve the global AI-player count and controller player number used by the released predicate. The `.equ` uses the carried `0x0046AC64` alias so the negative low half still addresses the real `0x0045AC64` global while reproducing target `%hi`.

## Outcome

The released `kellyslater_controller::IsAIPlayer` predicate matched exactly.
