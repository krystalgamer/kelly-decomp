# render_cgmesh__FPC7cg_meshRC2poG7color32

- Address: `0x002C9048`
- Size: `0xFC` (252 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/debug_render.cpp`
- Reference source: `KS/SRC/debug_render.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Compiled one exact released-source candidate for `render_cgmesh`: iterate `get_cfaces()`, transform each referenced raw vertex with `po::slow_xform`, and call `render_triangle` with the default single-sided flag. The narrow authentic declarations model the released `cg_mesh`, `cface`, `vert`, vector storage, `po`, and color layouts. Attempt 1 did not compile because the minimal vector declaration omitted `operator[]`; per first-pass rules, no second candidate was attempted.

## Outcome

Exact released cgmesh debug-render source did not compile in isolation; preserved attempt 1 for the later Sol pass.
