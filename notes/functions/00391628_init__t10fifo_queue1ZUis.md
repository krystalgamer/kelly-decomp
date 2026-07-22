# init__t10fifo_queue1ZUis

- Address: `0x00391628`
- Size: `0x48` (72 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.4444 | 61.1111 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 88.8889 | 88.8889 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released generic template body emitted the correct allocation and initialization but tail-called clear, producing 68 bytes.

### Attempt 2 notes

A direct normalized barrier in the dependent generic template did not parse under EE GCC 2.

### Attempt 3 notes

A test-only empty barrier after clear prevented the sibling call. Two prologue instructions remained reversed.

### Attempt 4 notes

A second test-only empty barrier at entry demonstrated that preventing initial instruction motion selects the target save/sign-extension schedule and matches.

### Attempt 5 notes

Expressed the same released instantiation as an explicit specialization so both demonstrated barriers can use `KELLY_DECOMP_COMPILER_BARRIER()`. The entry barrier preserves the target prologue schedule; the final barrier prevents the clear sibling call. Both emit no target instruction.

## Outcome

The released unsigned FIFO initialization matches exactly as a shared explicit specialization with documented empty barriers for prologue scheduling and final-call tail merging.
