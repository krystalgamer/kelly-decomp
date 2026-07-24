# nglLoadTextureA__FPCc

- Address: `0x0039C1C8`
- Size: `0x64` (100 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 92.0 | 34.7826 | `candidate.cpp` |
| 3 | different | 92.0 | 34.7826 | `candidate.cpp` |
| 4 | different | 34.0 | 9.0909 | `candidate.cpp` |
| 5 | different | 92.0 | 34.7826 | `candidate.cpp` |

## Outcome

Released fixed-string texture wrapper reached byte equality except for compiler zero-loop nop/decrement scheduling; five source candidates did not match.
