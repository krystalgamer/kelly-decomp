# changePos__10TextStringff

- Address: `0x00148430`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0 | 10.0 | `size40-frontend-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-frontend-variants-2.cpp` |
| 3 | different | 15.0 | 10.0 | `size40-frontend-variants-3.cpp` |

### Attempt 1 notes

The released stores are retained; routing the final adjuster through an ordinary local function pointer preserves the target call frame without a barrier.

## Outcome

The released `TextString::changePos` wrapper matched exactly.
