# nglCreateMesh__FUiUiP9nglMatrix

- Address: `0x003A9890`
- Size: `0x24C` (588 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 113 lane A5

Exact released `nglCreateMesh` body tested once for `0x003A9890 nglCreateMesh__FUiUiP9nglMatrix` with minimal self-contained declarations. Result `symbol_missing`: the candidate emitted `nglCreateMesh__FUiUiPA3_9nglVector` because the matrix typedef changed the mangled parameter type. Score 0.0%. No retry, variant, diff chase, build, finalize, integration, git mutation, or tracked edit.

## Outcome

The exact released NGL mesh creation candidate compiled without emitting the target symbol; no source variant was attempted.
