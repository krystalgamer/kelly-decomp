# nglGetMaterialIdx__FP7nglMeshUi

- Address: `0x003A1CA8`
- Size: `0x44` (68 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.1176 | 52.9412 | `candidate.cpp` |
| 2 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 3 | different | 26.4706 | 11.7647 | `candidate.cpp` |
| 4 | different | 85.2941 | 82.3529 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt notes

Attempt one used the exact released indexed loop and declarations. The target used pointer induction, so attempts two through four tested behavior-equivalent pointer loops and inspected their branch scheduling. Attempt five retained the released zero-section guard and expressed the loop as a guarded do-loop, reproducing the target fallthrough and induction exactly.

## Outcome

The material index lookup matches exactly.
