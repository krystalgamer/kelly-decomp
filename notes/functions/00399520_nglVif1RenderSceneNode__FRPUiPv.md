# nglVif1RenderSceneNode__FRPUiPv

- Address: `0x00399520`
- Size: `0x40` (64 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.3125 | 62.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

The released scene-node renderer matches with a narrow compiler barrier after the final call to prevent the demonstrated tail-call optimization.
