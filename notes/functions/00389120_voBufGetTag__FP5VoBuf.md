# voBufGetTag__FP5VoBuf

- Address: `0x00389120`
- Size: `0x64` (100 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.0 | 92.0 | `candidate.cpp` |
| 2 | different | 82.0 | 68.0 | `candidate.cpp` |
| 3 | different | 75.0 | 48.0 | `candidate.cpp` |
| 4 | different | 96.0 | 92.0 | `candidate.cpp` |
| 5 | different | 95.0 | 88.0 | `candidate.cpp` |

## Outcome

Released VoBuf tag lookup reached 23/25 instructions, but write/count load ordering resisted five source-level candidates.
