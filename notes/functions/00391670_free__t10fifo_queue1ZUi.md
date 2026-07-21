# free__t10fifo_queue1ZUi

- Address: `0x00391670`
- Size: `0x44` (68 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.4706 | 70.5882 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt notes

Attempt one used the exact released template body and declaration; GCC tail-called `clear`. Attempt two tested a direct empty barrier but exposed an old template-parser limitation. Attempt three demonstrated the required scheduling barrier with compatible syntax. Attempt four normalized it through an inline helper containing `KELLY_DECOMP_COMPILER_BARRIER()`.

## Outcome

The released unsigned FIFO free method matches exactly with a narrowly documented barrier preventing the non-target tail call.
