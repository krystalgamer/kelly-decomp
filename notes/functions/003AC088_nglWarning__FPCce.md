# nglWarning__FPCce

- Address: `0x003AC088`
- Size: `0x38` (56 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.h`
- Reference source: `NGL/PS2/ngl_ps2.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.2143 | 7.1429 | `candidate.cpp` |
| 2 | different | 48.2143 | 7.1429 | `candidate.cpp` |
| 3 | different | 48.2143 | 7.1429 | `candidate.cpp` |
| 4 | different | 48.2143 | 7.1429 | `candidate.cpp` |
| 5 | different | 48.2143 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

The released NGL_FINAL warning is an empty variadic function. The available isolated compiler emitted only integer argument saves, normalized to `sq`, and omitted the target floating argument saves.

### Attempt 2 notes

Explicitly discarded the named format argument while retaining empty behavior. Optimization produced the same 40-byte variadic stub.

### Attempt 3 notes

Used an explicit conditional early return with no effects. The compiler removed it and retained the same unmatched save area.

### Attempt 4 notes

Used a no-op control-flow body to test variadic prologue retention. Optimization again emitted the same short stub.

### Attempt 5 notes

Used a statically empty loop while preserving the variadic signature. The source-only attempt limit was reached with the same missing floating saves and differing integer save opcodes.

## Outcome

The released NGL_FINAL warning is correctly reconstructed as an empty variadic function, but the isolated compiler omits its floating argument saves and normalizes integer stack saves differently. Five source-only candidates were exhausted.
