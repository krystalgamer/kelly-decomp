# remove_local_thread__6regionP9vm_thread

- Address: `0x002E80E8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.0 | 6.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The volatile local preserves the released stack reference passed to STL `remove` and reload for `set_suspended(false)`, avoiding the isolated compiler's `s0` lifetime. The trailing barrier preserves the normal second call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `region::remove_local_thread` implementation matched exactly on attempt two.
