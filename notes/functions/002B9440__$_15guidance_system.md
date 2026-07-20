# _$_15guidance_system

- Address: `0x002B9440`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/guidance_sys.h`
- Reference source: `KS/SRC/guidance_sys.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released virtual destructor matched through its vtable restore at offset 0x8, owner clear, and conditional delete. The adjusted vtable alias reproduces the HI16 carry, and the trailing empty barrier preserves the framed call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released guidance-system destructor matched exactly on the first attempt.
