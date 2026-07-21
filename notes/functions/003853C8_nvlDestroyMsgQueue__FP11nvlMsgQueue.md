# nvlDestroyMsgQueue__FP11nvlMsgQueue

- Address: `0x003853C8`
- Size: `0x44` (68 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.6471 | 52.9412 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt notes

Attempt one used the released body and queue layout. Attempt two restored the DEBUG result lifetime and corrected linker-carried source aliases. Attempt three normalized the demonstrated scheduling barrier to `KELLY_DECOMP_COMPILER_BARRIER()`.

## Outcome

The released DEBUG-form queue destruction matches exactly with the narrow compiler barrier preventing an otherwise generated tail call.
