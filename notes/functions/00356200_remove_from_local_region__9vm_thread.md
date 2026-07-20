# remove_from_local_region__9vm_thread

- Address: `0x00356200`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1818 | 9.0909 | `candidate.cpp` |
| 2 | different | 93.1818 | 81.8182 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

An explicit null early return reproduces the target's RA restore in the branch delay slot. The trailing empty compiler barrier preserves the normal `jal` path instead of a sibling call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `vm_thread::remove_from_local_region` implementation matched exactly on attempt three.
