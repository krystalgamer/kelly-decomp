# nglSetSectionRenderer__FP14nglMeshSectionPFRPUiPv_v

- Address: `0x003A5810`
- Size: `0x8` (8 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `RenderFn` at offset `0x3C`.

## Outcome

The released `nglSetSectionRenderer` callback setter matched exactly on the first attempt.
