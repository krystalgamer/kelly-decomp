# nglDestroyMesh__FP7nglMesh

- Address: `0x003A9B80`
- Size: `0x2C` (44 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-platform-final.cpp` |

### Attempt 1 notes

The released helper waits for VIF1 before freeing the mesh. The trailing empty compiler barrier preserves the normal second call and return frame.

### Attempt 2 notes

A local function pointer preserves the normal free call without a compiler
barrier.

## Outcome

The compiler barrier was removed.
