# nglLoadTextureInPlace__FRC14nglFixedStringUiPvUi

- Address: `0x0039C230`
- Size: `0x1C0` (448 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.5268 | 3.5714 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 81 lane B1 — 0x0039C230 `nglLoadTextureInPlace__FRC14nglFixedStringUiPvUi`

- Candidate: exact released nglLoadTextureInPlace body with faithful texture, fixed-string, file-buffer, and instance-bank declarations.
- Citation: `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:3391-3433; NGL/PS2/ngl_ps2.h:161-166,493-554; NGL/PS2/ngl_fixedstr.h:14-61; NGL/PS2/ngl_instbank.h:6-35`.
- Result: `different`; byte score 18.5268%; instruction score 3.5714%.
- Candidate/target size: 416/448 bytes.
- Candidate SHA-1: `968852c6294305abd7f510089c1b18ee99f4e964`.
- UTC: 2026-07-28T20:52:04.377170972Z to 2026-07-28T20:52:07.499710025Z (3.128s).

Exactly one harness invocation and one distinct candidate were used. No retry, variant, post-test diff chase, build, finalize, integration, git mutation, or tracked-file edit occurred.

## Outcome

The exact released in-place texture loading body differed at 18.5268% byte score; no source variant was attempted.
