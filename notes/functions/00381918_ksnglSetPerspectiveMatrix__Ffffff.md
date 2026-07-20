# ksnglSetPerspectiveMatrix__Ffffff

- Address: `0x00381918`
- Size: `0x2C` (44 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1818 | 18.1818 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released wrapper supplies default Z range 0..1 and zero render dimensions to the full NGL perspective call. The trailing empty compiler barrier prevents a sibling call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released KS NGL perspective wrapper matched exactly on attempt two.
