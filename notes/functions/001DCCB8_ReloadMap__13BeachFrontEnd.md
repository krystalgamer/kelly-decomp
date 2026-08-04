# ReloadMap__13BeachFrontEnd

- Address: `0x001DCCB8`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.h`
- Reference source: `KS/SRC/ks/BeachFrontEnd.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.125 | 0.0 | `size32-panel-probes-1.cpp` |
| 2 | different | 3.125 | 0.0 | `size32-panel-probes-2.cpp` |
| 3 | different | 3.125 | 0.0 | `size32-panel-probes-3.cpp` |

## Outcome

All three direct forms load `path_pq`, adjust to the `MapData` member, and tail-call `MapData::Reload` in 12 bytes. The target retains a 32-byte frame, so the wrapper was deferred.
