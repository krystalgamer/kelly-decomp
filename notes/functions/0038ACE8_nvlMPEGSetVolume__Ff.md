# nvlMPEGSetVolume__Ff

- Address: `0x0038ACE8`
- Size: `0x68` (104 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.3462 | 7.6923 | `candidate.cpp` |
| 2 | different | 42.3077 | 30.7692 | `candidate.cpp` |
| 3 | different | 41.3462 | 30.7692 | `candidate.cpp` |
| 4 | different | 41.3462 | 30.7692 | `candidate.cpp` |
| 5 | different | 21.5517 | 3.4483 | `candidate.cpp` |

## Outcome

Deferred MPEG volume setter after five source-faithful candidates; whole-translation-unit FPU hazard nops from the released conversion helper did not reproduce standalone
