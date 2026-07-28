# render_quad__FRC8vector3dN30G7color32b

- Address: `0x002C8280`
- Size: `0x1D0` (464 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/debug_render.cpp`
- Reference source: `KS/SRC/debug_render.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave85 A2
Target: 0x002C8280 render_quad__FRC8vector3dN30G7color32b (464 bytes / 0x1D0), object game/files_misc2.
Confirmed zero prior attempts before testing. Exactly one LF-terminated candidate was tested, preserving the released debug_render.cpp function body exactly with minimal faithful self-contained declarations and no unavailable includes.
Result: symbol_missing, score 0.0; the compiler emitted render_quad__FRC8vector3dT0T0T0G7color32b rather than the target repeated-argument mangling.
No alternate source, assembly candidate, annotations, variants, retry, attempts 2-5, post-test chase, build, finalize, integrate, git mutation, or tracked/reference edits were performed.

## Outcome

The exact released debug-quad rendering candidate compiled without emitting the target symbol; no source variant was attempted.
