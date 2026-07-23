# is_uv_animated__C8vr_pmesh

- Address: `0x002D37A0`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.7727 | 9.0909 | `candidate.cpp` |
| 2 | different | 39.7727 | 9.0909 | `candidate.cpp` |
| 3 | different | 26.087 | 8.6957 | `candidate.cpp` |
| 4 | different | 54.5455 | 22.7273 | `candidate.cpp` |
| 5 | different | 39.7727 | 9.0909 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released material loop and u_anim/v_anim offsets. The compiler chose different iterator registers/branch delay setup and omitted one target floating comparison nop.

### Attempt 2 notes

Reordered end/current declarations. Code generation was unchanged.

### Attempt 3 notes

Constrained end/current/limit to the target v0/v1/a0 registers. This added an instruction and substantially changed the loop.

### Attempt 4 notes

Used explicit target-like true/false labels and a fixed result register. Size matched but branch/register layout still differed.

### Attempt 5 notes

Reverted to a source-faithful while loop with a register-qualified iterator and named material. The compiler returned to the original 84-byte form.

## Outcome

Released vr_pmesh::is_uv_animated remained blocked by iterator-register and floating scheduler differences after five source-level attempts.
