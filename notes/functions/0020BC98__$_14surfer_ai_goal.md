# _$_14surfer_ai_goal

- Address: `0x0020BC98`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_ai_goals.cpp`
- Reference source: `KS/SRC/ks/kellyslater_ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving destructor restores the surfer-goal vtable at 0x38 before delegating to `ai_goal`.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The `surfer_ai_goal` destructor matched exactly.
