# __14script_manager

- Address: `0x00352358`
- Size: `0x140` (320 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at . Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released script-manager constructor failed the isolated compile because legacy STL headers were unavailable; the sole attempt scored 0%.
