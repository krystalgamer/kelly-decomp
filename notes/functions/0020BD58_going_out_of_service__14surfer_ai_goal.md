# going_out_of_service__14surfer_ai_goal

- Address: `0x0020BD58`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_ai_goals.cpp`
- Reference source: `KS/SRC/ks/kellyslater_ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `native_gameplay_wrapper_probe_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `native_gameplay_wrapper_probe_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `native_gameplay_wrapper_probe_3.cpp` |

## Outcome

Three ordinary C++ forms all compile as eight-byte sibling calls. The target
preserves a 28-byte call frame, so the former barrier-dependent match was
removed and the function was deferred.
