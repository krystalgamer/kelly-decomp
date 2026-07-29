# nglLoadMeshFileInternal__FRC14nglFixedStringP11nglMeshFile

- Address: `0x003A15F8`
- Size: `0x1FC` (508 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.0709 | 54.3307 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave95 A2

- Target: `0x003A15F8 nglLoadMeshFileInternal__FRC14nglFixedStringP11nglMeshFile` (`0x1FC`), object `ngl/ngl_ps2`.
- Exact released body: `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:6286-6353`.
- Confirmed `attempts0` before preparation/testing.
- Candidate: LF-only exact body with minimal faithful self-contained NGL/PS2 declarations and no headers.
- Sole accepted attempt: `different`; byte score `58.0709%` (295/508), instruction score `54.3307%` (69/127); candidate and target are 508 bytes.
- Candidate SHA-1: `628ce3cb05adf411bc1abb3289b13bf88438299e`.
- Exactly one candidate and one accepted harness test invocation; no alternate, retry, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integration, build, or git mutation.

## Outcome

The exact released internal mesh-file loading body differed at 58.0709% byte score; no source variant was attempted.
