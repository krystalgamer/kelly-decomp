# nglReleaseMeshFile__FRC14nglFixedString

- Address: `0x003A1968`
- Size: `0x178` (376 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.7019 | 47.1154 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source FIRST PASS candidate using the verbatim function body from `NGL/PS2/ngl_ps2.cpp:6420-6466` at pinned commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`.

Minimal declarations and layouts were derived from `NGL/PS2/ngl_instbank.h:6-36`, `NGL/PS2/ngl_ps2.h:619-622,678-732,820-891`, and `NGL/PS2/ngl_ps2_internal.h:603-628` at the same commit.

Canonical attempt 1 result: `different`, score `63.7019` (instruction score `47.1154`), candidate size 416 versus target size 376. Per the one-candidate constraint, no retry, variant, or diff chase was performed.

## Outcome

Exact released-source first pass for mesh file release did not match.
