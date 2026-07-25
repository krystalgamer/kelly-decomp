# nglComputeBatchSize__FUiUiUiPUiN23

- Address: `0x003A91E8`
- Size: `0xAC` (172 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 92.4419 | 88.3721 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 20.5556 | 4.4444 | `candidate.cpp` |

## Outcome

Five released batch-sizing variants could not reproduce the original serialized division scheduling; the best source-faithful body used the R5900 secondary divide pipeline.
