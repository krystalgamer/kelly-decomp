# clear__t10fifo_queue1ZUi

- Address: `0x003915E0`
- Size: `0x48` (72 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released GCC template body and shared fifo_queue layout matched on the first attempt.

## Outcome

The released unsigned FIFO queue clear template matches exactly using the shared SDK declaration.
