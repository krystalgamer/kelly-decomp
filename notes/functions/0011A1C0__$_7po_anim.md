# _$_7po_anim

- Address: `0x0011A1C0`
- Size: `0x84` (132 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.1429 | 71.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released PO animation destructor matched after blocking the final class-delete tail call while preserving all three optional subanimation deletes.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released PO animation destructor matched exactly on the second attempt.
