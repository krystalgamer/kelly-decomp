# GetTrickCount__CQ214ScoringManager6Seriesi

- Address: `0x00249B28`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `gettrickcount_candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `gettrickcount_candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `gettrickcount_candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released function body was paired with `#include "scoringmanager.h"`, but the isolated compiler only searches the repository `include/` directory and could not resolve that header.

### Attempt 2 notes

The second candidate used the released function body with `#include "ks/scoringmanager.h"`. The immutable source tree is not on the isolated compiler include path, so this header also could not be resolved.

### Attempt 3 notes

The third candidate declared the nested `ScoringManager`, `Series`, and `Trick` types locally, but still included `<list>`. The archived GCC 2.9 isolated toolchain has no installed C++ list header, so compilation failed before code generation.

### Attempt 4 notes

The released loop was preserved verbatim and paired with minimal self-contained declarations matching the observed original layout: `Series::levelTricks` at offset 0, a one-pointer `TrickList` at offset 4, a heap sentinel whose first word is `next`, and list nodes containing `next`, `prev`, then `Trick`. This produced all 68 target bytes and all 17 instructions exactly.

## Outcome

The immutable released Series::GetTrickCount loop was integrated unchanged. Minimal local declarations reproduce the original one-pointer list sentinel, node links, Trick payload offsets, and Series layout without unavailable headers. Attempt 4 matches all 68 bytes and 17 instructions; attempt 5 was not used. The integrated fast build reproduces the reference ROM exactly.
