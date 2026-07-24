# GetPos__9PanelQuadRfN31

- Address: `0x0014DDA0`
- Size: `0x68` (104 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 64.4231 | 50.0 | `candidate.cpp` |
| 3 | different | 86.5385 | 76.9231 | `candidate.cpp` |
| 4 | different | 77.8846 | 73.0769 | `candidate.cpp` |
| 5 | different | 86.5385 | 76.9231 | `candidate.cpp` |

## Outcome

Released PanelQuad position extraction and coordinate conversion reached 20/26 instructions, but five candidates could not reproduce the multi-reference ABI prologue scheduling.
