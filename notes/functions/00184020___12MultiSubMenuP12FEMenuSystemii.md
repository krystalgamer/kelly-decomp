# __12MultiSubMenuP12FEMenuSystemii

- Address: `0x00184020`
- Size: `0x420` (1056 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released constructor body copied from `kelly-slaters-pro-surfer/KS/SRC/ks/MainFrontEnd.cpp:1163-1196`, with source-faithful declarations/includes attempted. The one permitted test compile-failed because the existing shared include closure redefined `PanelFile`. No alternate was tried.

## Outcome

Exact released-source constructor attempted once; compile failed in the existing shared include closure, so the function is deferred.
