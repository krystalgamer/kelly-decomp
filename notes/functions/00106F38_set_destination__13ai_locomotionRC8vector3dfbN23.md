# set_destination__13ai_locomotionRC8vector3dfbN23

- Address: `0x00106F38`
- Size: `0x1C0` (448 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.0 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave 80 lane B2
Target: 0x00106F38 set_destination__13ai_locomotionRC8vector3dfbN23 (448 bytes / 0x1C0), object game/files_ai.
Confirmed zero prior attempts before testing. Exactly one prepared, non-placeholder candidate was tested. It preserves the exact released set_destination body with minimal self-contained vector, entity, layout, and external method declarations; unavailable project headers were not used.
Result: different; byte score 21.0% (105/500 compared bytes), instruction score 0.0% (0/125), candidate size 500 bytes versus target size 448 bytes.
No retry, variants, alternate source, manual assembly, matching annotations, diff chase, build/configure/ninja, finalize, integrate, manifest update, git mutation, or tracked edits.

Citations:
- kelly-slaters-pro-surfer/KS/SRC/ai_locomotion.cpp:97-137
- kelly-slaters-pro-surfer/KS/SRC/ai_locomotion.h:44-100,144-145
- config/SLUS_203.34.symbol_addrs.txt:79
- notes/function_queue.csv:6483
- tmp/functions/00106F38_set_destination__13ai_locomotionRC8vector3dfbN23/attempt-1/result.json

## Outcome

The exact released AI destination-setting body differed at 21.0000% byte score; no source variant was attempted.
