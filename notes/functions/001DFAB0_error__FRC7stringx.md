# error__FRC7stringx

- Address: `0x001DFAB0`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_errmsg.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_errmsg.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 55.5556 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an address-register, inner-symbol, or independent-store scheduling mismatch.

### Attempt 2 notes

Assertions compile out, leaving the string data forwarded through the shared `%s\n` NGL format.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released stringx `error` overload matched exactly.
