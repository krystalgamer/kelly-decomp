# _$_Q213IconChallenge4Icon

- Address: `0x00261530`
- Size: `0x24` (36 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving trivial deleting destructor applies the low-bit delete guard.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The icon-challenge `Icon` deleting destructor matched exactly.
