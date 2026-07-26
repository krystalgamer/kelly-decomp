# nglListAddParticle__FP17nglParticleSystem

- Address: `0x003A8B50`
- Size: `0xC4` (196 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.9649 | 24.5614 | `candidate.cpp` |
| 2 | different | 35.9649 | 24.5614 | `candidate.cpp` |
| 3 | different | 34.375 | 21.4286 | `candidate.cpp` |
| 4 | different | 34.375 | 21.4286 | `candidate.cpp` |
| 5 | different | 29.9107 | 14.2857 | `candidate.cpp` |

## Outcome

Five attempts recovered particle-node setup, but the compiler emitted 64-bit copies instead of the target quadword copy loop.
