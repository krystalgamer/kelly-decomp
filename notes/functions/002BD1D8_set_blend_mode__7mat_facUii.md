# set_blend_mode__7mat_facUii

- Address: `0x002BD1D8`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released map blend-mode store and alpha toggle use the shared material
declaration.

## Outcome

The local material layout was removed; the released setter remains exact.
