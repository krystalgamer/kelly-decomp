# WAVETEX_SetMatFoamy__Fbi

- Address: `0x00380E20`
- Size: `0x80` (128 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.1471 | 8.8235 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 16.4062 | 6.25 | `candidate.cpp` |
| 4 | different | 16.4062 | 3.125 | `candidate.cpp` |
| 5 | different | 56.25 | 25.0 | `candidate.cpp` |

## Outcome

Deferred the released wave-material foam toggle after five source-level attempts; the bit update was exact semantically, but target pointer arithmetic register allocation could not be reproduced.
