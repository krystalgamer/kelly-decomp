# __4ectxRC7stringx

- Address: `0x003498A0`
- Size: `0x70` (112 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/errorcontext.cpp`
- Reference source: `KS/SRC/errorcontext.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.069 | 20.6897 | `candidate.cpp` |
| 2 | different | 37.069 | 20.6897 | `candidate.cpp` |
| 3 | different | 32.5758 | 21.2121 | `candidate.cpp` |
| 4 | different | 88.3929 | 67.8571 | `candidate.cpp` |
| 5 | different | 26.6667 | 10.0 | `candidate.cpp` |

## Outcome

Deferred error-context constructor after five source-level attempts; the released singleton stack push reproduced, but the target vector push register and prologue scheduling did not.
