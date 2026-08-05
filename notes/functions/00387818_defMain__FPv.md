# defMain__FPv

- Address: `0x00387818`
- Size: `0x24` (36 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 83.3333 | `size36-nvl.cpp` |
| 2 | different | 58.3333 | 83.3333 | `size36-nvl-variants-2.cpp` |
| 3 | different | 58.3333 | 83.3333 | `size36-nvl-variants-3.cpp` |

## Outcome

All three ordinary forms of the released infinite scheduling loop emit 24
bytes. The target includes four additional NOPs, so the non-released inline
assembly padding was removed and the original target function was deferred.
