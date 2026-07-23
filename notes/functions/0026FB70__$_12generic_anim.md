# _$_12generic_anim

- Address: `0x0026FB70`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.h`
- Reference source: `KS/SRC/ks/floatobj.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.2174 | 56.5217 | `candidate.cpp` |
| 2 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released generic_anim declaration, empty virtual destructor, stringx member, and vtable layout. Reconstructed the generated member destruction, deleting-mode handling, and non-tail delete continuation; attempt 3 matched byte-exactly.

## Outcome

Matched generated generic_anim destructor
