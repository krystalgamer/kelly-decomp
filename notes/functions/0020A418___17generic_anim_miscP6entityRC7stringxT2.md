# __17generic_anim_miscP6entityRC7stringxT2

- Address: `0x0020A418`
- Size: `0x98` (152 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.7805 | 12.1951 | `candidate.cpp` |
| 2 | different | 86.8421 | 84.2105 | `candidate.cpp` |
| 3 | different | 71.7105 | 65.7895 | `candidate.cpp` |
| 4 | different | 86.8421 | 84.2105 | `candidate.cpp` |
| 5 | different | 86.8421 | 84.2105 | `candidate.cpp` |

## Outcome

Five released-source constructor variants reproduced all base/derived initialization and construct calls, but target-specific prologue save/spill scheduling did not match.
