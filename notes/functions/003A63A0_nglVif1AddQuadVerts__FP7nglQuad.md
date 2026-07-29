# nglVif1AddQuadVerts__FP7nglQuad

- Address: `0x003A63A0`
- Size: `0x228` (552 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 74.6377 | 70.2899 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave107 A3

- Target: `0x003A63A0 nglVif1AddQuadVerts__FP7nglQuad` (`0x228`), object `ngl/ngl_ps2`.
- Exact released body: `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:7900-7914`.
- Confirmed attempts0 before testing.
- Candidate: LF-only exact released NGL body with minimal self-contained declarations.
- Sole attempt: `different`; byte score `74.6377%` (412/552), instruction score `70.2899%` (97/138); candidate 544 bytes, target 552 bytes.
- Candidate SHA-1: `295af3f9e4231a0873e4e25c500fd85a0f2732ae`.
- Exactly one harness test; no retry, follow-up, build, finalize, integration, or tracked edit.

## Outcome

The exact released VIF quad-vertex body differed at 74.6377% byte score; no source variant was attempted.
