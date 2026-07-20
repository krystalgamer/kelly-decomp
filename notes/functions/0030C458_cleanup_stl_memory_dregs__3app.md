# cleanup_stl_memory_dregs__3app

- Address: `0x0030C458`
- Size: `0x24` (36 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/app.cpp`
- Reference source: `KS/SRC/app.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The active released cleanup only delegates to the animation-id manager singleton.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released STL cleanup wrapper matched exactly.
