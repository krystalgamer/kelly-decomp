# Draw__13PreformatText

- Address: `0x0014C510`
- Size: `0xC0` (192 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.4167 | 20.8333 | `candidate.cpp` |
| 2 | different | 35.4167 | 20.8333 | `candidate.cpp` |
| 3 | different | 37.2449 | 20.4082 | `candidate.cpp` |
| 4 | different | 31.25 | 16.6667 | `candidate.cpp` |
| 5 | different | 35.4167 | 20.8333 | `candidate.cpp` |

### Attempt 2 notes

Restoring the four missing `TextString` virtual declarations recovered the
target `DrawLine` slot. The remaining difference was three compiler-generated
floating-point hazard `nop` instructions.

### Attempt 5 notes

Split conditions, empty barriers, and an explicit line-position temporary
could not recover the hazard slots without instruction-emitting assembly.

## Outcome

The released preformatted text draw loop remained three compiler-generated floating-point hazard nops short after five non-emitting source variants.
