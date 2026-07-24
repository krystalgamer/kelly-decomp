# endEvent__18SoundScriptManagerif

- Address: `0x0031C2F0`
- Size: `0x6C` (108 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.3333 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 34.2593 | 18.5185 | `candidate.cpp` |
| 4 | different | 34.2593 | 18.5185 | `candidate.cpp` |
| 5 | different | 31.25 | 14.2857 | `candidate.cpp` |

## Outcome

Deferred sound event ending after five source-faithful candidates; whole-translation-unit FPU zero-comparison hazard nop did not reproduce standalone
