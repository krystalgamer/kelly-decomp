# _$_10PanelBatch

- Address: `0x001500A0`
- Size: `0xD0` (208 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.1154 | 71.1538 | `candidate.cpp` |
| 2 | different | 79.8077 | 73.0769 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 85.1852 | 81.4815 | `candidate.cpp` |
| 5 | different | 85.1852 | 81.4815 | `candidate.cpp` |

## Outcome

The released teardown reached 85.19%, but the compiler retained an irreducible destructor tail-call epilogue after five source-level attempts.
