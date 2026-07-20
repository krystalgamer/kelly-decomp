# OnButtonRelease__14SurferFrontEndii

- Address: `0x001DCB88`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.h`
- Reference source: `KS/SRC/ks/SurferFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu null guard and virtual OnButtonRelease forwarding matched exactly with `active` at offset 0x60 and OnButtonRelease at virtual slot 0x104.

## Outcome

The released surfer-frontend button-release forwarding matched exactly on the first attempt.
