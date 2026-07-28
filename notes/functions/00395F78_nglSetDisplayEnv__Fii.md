# nglSetDisplayEnv__Fii

- Address: `0x00395F78`
- Size: `0x1C0` (448 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.375 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 tested the exact released nglSetDisplayEnv body unchanged with minimal self-contained PS2 GS register declarations and no includes. The candidate compiled and differed: 9.375% byte score, 0.0% instruction score, 380 bytes versus the 448-byte target. Per first-pass constraints, no variant, retry, annotation, alternate source, or diff chase was performed.

## Outcome

The exact released display-environment setup body differed at 9.3750% byte score; no source variant was attempted.
