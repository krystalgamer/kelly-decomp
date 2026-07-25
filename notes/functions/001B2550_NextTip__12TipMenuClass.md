# NextTip__12TipMenuClass

- Address: `0x001B2550`
- Size: `0x94` (148 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.4324 | 10.8108 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reproduced the released empty-list return and inline Random::rand(end) wrapper. Caching the end argument across NextRand and using the exact stringx constructors matched the hidden-return ABI exactly.

## Outcome

Matched random pause tip selection
