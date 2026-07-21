# ATETextureName__FPcRC14nglFixedStringi

- Address: `0x003ACBA8`
- Size: `0x44` (68 bytes)
- Object: `ngl/ngl_ate`
- Debug source: `C:/NGL/ps2/ngl_ate.cpp`
- Reference source: `NGL/PS2/ngl_ate.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.5294 | 94.1176 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt notes

Attempt one used the exact released body and relevant ATE declarations. The sole difference was the high half of the negative-low-half `baditem` address; attempt two used the linker-carried absolute alias and matched.

## Outcome

The released ATE texture-name lookup matches exactly.
