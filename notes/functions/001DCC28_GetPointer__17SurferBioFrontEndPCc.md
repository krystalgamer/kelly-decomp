# GetPointer__17SurferBioFrontEndPCc

- Address: `0x001DCC28`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.h`
- Reference source: `KS/SRC/ks/SurferFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline body now uses the canonical `FrontEnd::GetPointer`
inherited through `FEMultiMenu`, naturally emitting the target call frame.

## Outcome

The inline `SurferBioFrontEnd::GetPointer` frontend wrapper matched exactly on the first attempt.
