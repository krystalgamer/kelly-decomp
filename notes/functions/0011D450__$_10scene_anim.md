# _$_10scene_anim

- Address: `0x0011D450`
- Size: `0x154` (340 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/scene_anim.cpp`
- Reference source: `KS/SRC/scene_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released source for _$_10scene_anim. Result `compile_failed`, score 0.0000; no variant or later attempt was made.

## Outcome

The exact released scene-animation destructor failed the isolated compile because a released header was unavailable; the sole attempt scored 0%.
