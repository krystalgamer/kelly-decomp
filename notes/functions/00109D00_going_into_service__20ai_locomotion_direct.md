# going_into_service__20ai_locomotion_direct

- Address: `0x00109D00`
- Size: `0x88` (136 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.1176 | 2.9412 | `candidate.cpp` |
| 2 | different | 83.8235 | 82.3529 | `candidate.cpp` |
| 3 | different | 64.7059 | 58.8235 | `candidate.cpp` |
| 4 | different | 83.8235 | 82.3529 | `candidate.cpp` |
| 5 | different | 35.7143 | 8.5714 | `candidate.cpp` |

## Outcome

Deferred the released direct-locomotion service entry after five source-level attempts; base activation, walk/run animation launch, temporary string lifetime, and face-animation reset were reconstructed, but call setup scheduling remained different.
