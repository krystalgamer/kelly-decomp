# __tf11IGOFrontEnd

- Address: `0x001DC418`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.h`
- Reference source: `KS/SRC/ks/IGOFrontEnd.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.5484 | 3.2258 | `candidate.cpp` |
| 2 | different | 18.5484 | 3.2258 | `candidate.cpp` |
| 3 | different | 16.9355 | 3.2258 | `candidate.cpp` |
| 4 | different | 18.5484 | 3.2258 | `candidate.cpp` |
| 5 | different | 16.9355 | 3.2258 | `candidate.cpp` |

## Outcome

Deferred IGOFrontEnd multiple-inheritance RTTI generation after five source-level attempts; the released EventRecipient and FrontEnd base initialization plus RTTI class descriptor reproduced, but the target global-address register allocation did not.
