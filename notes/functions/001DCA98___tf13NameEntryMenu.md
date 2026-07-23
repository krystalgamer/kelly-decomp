# __tf13NameEntryMenu

- Address: `0x001DCA98`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `ks/HighScoreFrontEnd.h`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released NameEntryMenu declaration and FEMultiMenu inheritance. Reconstructed the generated class RTTI body with the exact base RTTI call, __rtti_class helper, type/name/base pointers, and public-base flag.

## Outcome

Matched released NameEntryMenu RTTI body
