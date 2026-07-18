# SetSystem__13LegalFrontEndP12FEMenuSystem

- Address: `0x001BC490`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter assigns `system = s`. Modeling `system` at offset `0x50`
produced the target store in the return delay slot on the first attempt.

## Outcome

The released source assigns the FEMenuSystem pointer directly. Modeling LegalFrontEnd::system at offset 0x50 reproduced the target delay-slot store exactly on the first attempt and preserved the byte-identical integrated ROM.
