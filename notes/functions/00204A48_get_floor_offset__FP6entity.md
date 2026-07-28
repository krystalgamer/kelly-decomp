# get_floor_offset__FP6entity

- Address: `0x00204A48`
- Size: `0x164` (356 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released source/minimal declarations. Compile failed because the minimal preamble omitted the `NULL` declaration.

## Outcome

The exact released floating-object floor-offset helper failed the isolated compile because NULL was undeclared; the sole attempt scored 0%.
