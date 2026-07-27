# hand_underwater__C5trailP6entityR8vector3d

- Address: `0x003626B0`
- Size: `0x124` (292 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/ks/trail.cpp:452-470; kelly-slaters-pro-surfer/KS/SRC/ks/trail.h:99-111; kelly-slaters-pro-surfer/KS/SRC/ks/wave.h:138-158,248,295-316; kelly-slaters-pro-surfer/KS/SRC/ks/waveenum.h:21-26; kelly-slaters-pro-surfer/KS/SRC/ks/wavemarker.txt:61; src/KS/SRC/entity_shared.h:350-361; notes/function_queue.csv:5876. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released trail underwater-hand test failed the isolated compile because NULL was undeclared; the sole attempt scored 0%.
