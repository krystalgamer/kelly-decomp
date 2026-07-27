# add_entity_preload_script__21world_dynamics_systemP6entityRC7stringx

- Address: `0x002A8DD0`
- Size: `0x124` (292 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/wds.cpp:8559-8583; kelly-slaters-pro-surfer/KS/SRC/wds.h:582-610; kelly-slaters-pro-surfer/KS/SRC/entity.h:1135-1137; kelly-slaters-pro-surfer/KS/SRC/entflavor.h:12-37; kelly-slaters-pro-surfer/KS/SRC/filespec.h:9-23; tmp/functions/002A8DD0_add_entity_preload_script__21world_dynamics_systemP6entityRC7stringx/attempt-1/compiler.stderr. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released entity preload-script adder failed the isolated compile because placement-new declarations were unavailable; the sole attempt scored 0%.
