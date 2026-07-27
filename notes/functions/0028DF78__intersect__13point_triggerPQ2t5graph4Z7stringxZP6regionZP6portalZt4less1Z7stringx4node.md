# _intersect__13point_triggerPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node

- Address: `0x0028DF78`
- Size: `0x10C` (268 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.1493 | 2.9851 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Copied the released `point_trigger::_intersect` body exactly from `kelly-slaters-pro-surfer/KS/SRC/trigger.cpp:280-302`.
- Included only the declarations needed for `vector3d`, `sphere`, `region`, `portal`, the graph node/edge iterator, the region pointer vector, `trigger_manager`, and `point_trigger`.
- Ran `function_test` exactly once. Result: `different`, byte score 20.1493% (54/268), instruction score 2.9851% (2/67), candidate size 228 versus target 268.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tool edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/trigger.cpp:280-302`
- `kelly-slaters-pro-surfer/KS/SRC/trigger.h:101-124`
- `tmp/functions/0028DF78__intersect__13point_triggerPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node/attempt-1/result.json`

## Outcome

The exact released point-trigger intersection definition differed from the target; the sole attempt scored 20.1493%.
