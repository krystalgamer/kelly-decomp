# _$_15IconCountWidget

- Address: `0x0016D628`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_iconcount.cpp`
- Reference source: `KS/SRC/ks/igo_widget_iconcount.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.5758 | 78.7879 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released icon-count widget destructor matched after blocking the base-widget destructor tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released icon-count widget destructor matched exactly on the second attempt.
