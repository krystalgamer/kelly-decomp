# nglCalcMaterialHash__FP11nglMaterial

- Address: `0x003A11B8`
- Size: `0xAC` (172 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The exact released texture-size comparison order and material hash selection matched byte-exactly on Sol attempt two after restoring C++ symbol mangling.

## Outcome

Matched NGL material texture hash calculation.
