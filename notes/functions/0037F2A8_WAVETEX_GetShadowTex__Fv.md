# WAVETEX_GetShadowTex__Fv

- Address: `0x0037F2A8`
- Size: `0x50` (80 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.75 | 0.0 | `candidate.cpp` |
| 2 | different | 33.3333 | 4.7619 | `candidate.cpp` |
| 3 | different | 15.0 | 5.0 | `candidate.cpp` |
| 4 | different | 15.0 | 5.0 | `candidate.cpp` |
| 5 | different | 15.0 | 5.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released conditional returns with source-faithful WavetexDebug offsets and shadow texture globals. The compiler omitted the target redundant high-address register copy, producing an otherwise aligned 76-byte body.

### Attempt 2 notes

Introduced explicit debug and texture-pointer locals to reproduce the target shared high-address register. This over-constrained allocation and produced an 84-byte control-flow shape.

### Attempt 3 notes

Used a debug pointer plus the matching-only compiler barrier before the exact released conditions. The compiler shortened the body to 72 bytes and did not emit the target address copy.

### Attempt 4 notes

Changed the debug pointer to a const reference while retaining the exact released conditions. Code generation remained the same 72-byte shape.

### Attempt 5 notes

Moved debug-address acquisition into an inline matching-barrier helper. It still inlined to the 72-byte form without the target redundant move.

## Outcome

Released WAVETEX_GetShadowTex did not reproduce the target shared high-address register copy after five source-level attempts.
