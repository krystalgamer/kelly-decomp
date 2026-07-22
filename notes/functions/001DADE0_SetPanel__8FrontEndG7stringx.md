# SetPanel__8FrontEndG7stringx

- Address: `0x001DADE0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.1053 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released inline body matched without structural divergence after extending
the existing shared `PanelFile` declaration with its original `SetFilename`
member.  The second attempt supplied the reviewed absolute bindings for the
already reconstructed `stringx` copy constructor and destructor.

## Outcome

Matched the released FrontEnd panel setter using the shared source-faithful front-end and PanelFile declarations.
