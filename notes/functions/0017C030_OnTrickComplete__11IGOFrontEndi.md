# OnTrickComplete__11IGOFrontEndi

- Address: `0x0017C030`
- Size: `0x178` (376 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Candidate 1 used the exact released `IGOFrontEnd::OnTrickComplete` body with only minimal declarations and type layout needed by that body.

Result: `compile_failed`, score `0.0`. The compiler could not find `assert.h`; this consumed the single permitted attempt, so no retry or declaration variant was tested.

Citations: `kelly-slaters-pro-surfer/KS/SRC/ks/IGOFrontEnd.cpp:3014-3041`; `kelly-slaters-pro-surfer/KS/SRC/ks/IGOFrontEnd.h:270-311`; `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.h:794-799`; `kelly-slaters-pro-surfer/KS/SRC/ks/wds.h:319-324`; `kelly-slaters-pro-surfer/KS/SRC/game.h:241-245`.

## Outcome

Exact released-source first pass for front end trick completion did not match.
