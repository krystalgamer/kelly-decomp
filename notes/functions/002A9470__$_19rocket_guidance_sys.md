# _$_19rocket_guidance_sys

- Address: `0x002A9470`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/guidance_sys.cpp`
- Reference source: `KS/SRC/guidance_sys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty derived destructor matched through its inlined base cleanup: restoring the guidance-system vtable at offset 0x8, clearing owner, and conditionally deleting. The adjusted vtable alias reproduces the HI16 carry, and the trailing barrier preserves the framed call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released rocket-guidance destructor matched exactly on the first attempt.
