# nglVif1IntCloseTextureBlock__Fv

- Address: `0x0039F488`
- Size: `0x1D8` (472 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.5833 | 69.1667 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave88 A1

- Target: `0x0039F488 nglVif1IntCloseTextureBlock__Fv` (472 / `0x1D8`), object `ngl/ngl_ps2`.
- Exact released body: `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:4941-4976`.
- Confirmed attempts0 before preparation/testing.
- Candidate: LF-only exact body with minimal faithful self-contained NGL/PS2 declarations and no headers.
- Sole attempt: `different`; byte score 64.5833% (310/480 compared), instruction score 69.1667% (83/120); candidate 480 bytes, target 472 bytes.
- Candidate SHA-1: `ed38054310d450acab93b5051d448ef869b96e48`.
- Exactly one candidate and one harness invocation. No alternate, asm, annotations, variants, retry, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, git mutation, or full packet submission.

## Outcome

The exact released VIF texture-block closure body differed at 64.5833% byte score; no source variant was attempted.
