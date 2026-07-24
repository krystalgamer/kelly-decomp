# _$_10KSMainMenu

- Address: `0x00270E68`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ksdbmenu.h`
- Reference source: `KS/SRC/ks/ksdbmenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 68.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released derived/base Close sequence and Resize teardown matched after a non-emitting barrier prevented the deleting destructor from tail-calling operator delete.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released KSMainMenu destructor matched exactly on the second attempt.
