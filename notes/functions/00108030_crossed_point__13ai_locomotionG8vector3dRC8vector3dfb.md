# crossed_point__13ai_locomotionG8vector3dRC8vector3dfb

- Address: `0x00108030`
- Size: `0x118` (280 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/ai_locomotion.cpp:577-595; kelly-slaters-pro-surfer/KS/SRC/ai_locomotion.h:22-64,132; config/SLUS_203.34.symbol_addrs.txt:89; tmp/target-full-disasm.txt:8365-8433. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released AI-locomotion crossed-point test failed the isolated compile because its released vector constructor was unavailable; the sole attempt scored 0%.
