# _GLOBAL_$I$ATENameMatch__FRC14nglFixedStringT0

- Address: `0x003ACD60`
- Size: `0x20` (32 bytes)
- Object: `ngl/ngl_ate`
- Debug source: `C:/NGL/ps2/ngl_ate.cpp`
- Reference source: `NGL/PS2/ngl_ate.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-last-thunks-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-last-thunks-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-last-thunks-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling
call. The manual generated-symbol wrapper was removed and the target returned
to raw text.
