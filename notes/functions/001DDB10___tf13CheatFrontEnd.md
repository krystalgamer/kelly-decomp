# __tf13CheatFrontEnd

- Address: `0x001DDB10`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/cheatfrontend.h`
- Reference source: `KS/SRC/ks/CheatFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released CheatFrontEnd declaration and FEMultiMenu inheritance. Reconstructed the generated class RTTI body with exact base RTTI call, __rtti_class helper, type/name/base pointers, and public-base flag.

## Outcome

Matched released CheatFrontEnd RTTI body
