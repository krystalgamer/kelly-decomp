# Draw__14GoalsMenuClass

- Address: `0x001B1550`
- Size: `0x108` (264 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempted the exact released GoalsMenuClass::Draw body and declarations via the released global.h and FrontEndMenus.h. The sole function_test invocation failed before compilation because the candidate-relative released-header include paths were not found; no retry or variant was attempted.

## Outcome

The exact released goals-menu draw definition failed the isolated compile because its relative released headers were unavailable; the sole attempt scored 0%.
