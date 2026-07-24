# nglReleaseAllFonts__Fv

- Address: `0x003A7058`
- Size: `0x88` (136 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.3529 | 2.9412 | `candidate.cpp` |
| 2 | different | 32.3529 | 2.9412 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 23.5294 | 0.0 | `candidate.cpp` |
| 5 | different | 28.6765 | 5.8824 | `candidate.cpp` |

## Outcome

Deferred the released all-font release loop after five source-level attempts; skip-list traversal, system-font skipping, refcount reset, release, and head restart were reconstructed, but bank-base register scheduling remained different.
