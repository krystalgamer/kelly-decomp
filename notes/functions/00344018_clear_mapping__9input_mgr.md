# clear_mapping__9input_mgr

- Address: `0x00344018`
- Size: `0x150` (336 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/inputmgr.cpp:341-347; kelly-slaters-pro-surfer/KS/SRC/inputmgr.h:35-60,309-380,383-437,551-559; kelly-slaters-pro-surfer/KS/SRC/singleton.h:34-42; tmp/functions/00344018_clear_mapping__9input_mgr/attempt-1/compiler.stderr:1-2; tmp/functions/00344018_clear_mapping__9input_mgr/attempt-1/result.json; tmp/source_first/00344018/attempt-1.md. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released input mapping clear failed the isolated compile because map and list headers were unavailable; the sole attempt scored 0%.
