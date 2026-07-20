# _$_14HeadToHeadMode

- Address: `0x002868D0`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_headtohead.cpp`
- Reference source: `KS/SRC/ks/mode_headtohead.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving trivial deleting destructor applies the low-bit delete guard.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The `HeadToHeadMode` deleting destructor matched exactly.
