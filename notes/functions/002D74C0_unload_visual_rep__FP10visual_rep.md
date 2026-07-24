# unload_visual_rep__FP10visual_rep

- Address: `0x002D74C0`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/visrep.cpp`
- Reference source: `KS/SRC/visrep.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.4545 | 60.6061 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released visual-representation unload matched after blocking tail calls on both instance-bank deletion paths.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released visual-representation unload matched exactly on the second attempt.
