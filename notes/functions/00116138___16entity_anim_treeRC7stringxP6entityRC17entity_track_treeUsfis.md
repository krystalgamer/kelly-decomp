# __16entity_anim_treeRC7stringxP6entityRC17entity_track_treeUsfis

- Address: `0x00116138`
- Size: `0x110` (272 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.25 | 11.7647 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS lane B5. Tested the released single-track entity_anim_tree constructor once with its exact initializer list and self-contained declarations reproducing the released entity_anim base initialization, static anim-vector reference, and external symbols. The candidate compiled and emitted the requested symbol but did not match (252 vs 272 bytes; 31.25% byte score, 11.7647% instruction score). Per first-pass policy, no variants or diff chasing were attempted, and no source/prefix/shared integration proposal is supplied.

## Outcome

The exact released entity-animation-tree constructor differed from the target; the sole attempt scored 31.25%.
