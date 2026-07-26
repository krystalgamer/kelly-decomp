# _$_13PAL60FrontEnd

- Address: `0x001D50C8`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PAL60FrontEnd.cpp`
- Reference source: `KS/SRC/ks/PAL60FrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.9483 | 5.1724 | `candidate.cpp` |
| 2 | different | 15.9483 | 5.1724 | `candidate.cpp` |
| 3 | different | 15.9483 | 5.1724 | `candidate.cpp` |
| 4 | different | 16.8103 | 5.1724 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released PAL60 frontend destructor recovers both owned virtual deletes and derived vtable points, but authentic shared bases tail-call FEMultiMenu and omit the target-expanded stringx, panel, animation-manager, and FEMenu teardown tail.
