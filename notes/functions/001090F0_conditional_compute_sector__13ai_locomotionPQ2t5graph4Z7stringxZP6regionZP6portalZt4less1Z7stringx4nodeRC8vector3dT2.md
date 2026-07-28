# conditional_compute_sector__13ai_locomotionPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeRC8vector3dT2

- Address: `0x001090F0`
- Size: `0x178` (376 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.8421 | 14.7368 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source FIRST PASS attempt using the function body from `kelly-slaters-pro-surfer/KS/SRC/ai_locomotion.cpp:919-960` and minimal self-contained declarations/layout derived from `KS/SRC/ai_locomotion.h:105`, `KS/SRC/region_graph.h:7-15`, `KS/SRC/terrain.h:38-40`, `KS/SRC/sphere.h:15-31`, `KS/SRC/entity.h:704,785,1247`, `KS/SRC/portal.h:38-39`, and `KS/SRC/wds.h:354,630` at commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`.

Canonical result: `different`, score `31.8421` (instruction score `14.7368`), candidate size 380 versus target size 376. Per lane constraints, no retry or assembly/diff chase was performed.

## Outcome

Exact released-source first pass for conditional sector computation did not match.
