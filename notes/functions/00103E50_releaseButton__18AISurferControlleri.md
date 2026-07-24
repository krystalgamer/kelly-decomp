# releaseButton__18AISurferControlleri

- Address: `0x00103E50`
- Size: `0x80` (128 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.cpp`
- Reference source: `KS/SRC/AIController.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.6562 | 100.0 | `candidate.cpp` |
| 2 | different | 12.5 | 6.25 | `candidate.cpp` |
| 3 | different | 92.9688 | 81.25 | `candidate.cpp` |
| 4 | different | 97.6562 | 100.0 | `candidate.cpp` |
| 5 | different | 97.6562 | 100.0 | `candidate.cpp` |

## Outcome

Deferred the released AI button-release switch after five source-level attempts; the generated instructions matched exactly, but the standalone compiler could not place the local jump table at the target ROM address.
