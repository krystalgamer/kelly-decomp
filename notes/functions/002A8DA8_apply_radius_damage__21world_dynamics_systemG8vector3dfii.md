# apply_radius_damage__21world_dynamics_systemG8vector3dfii

- Address: `0x002A8DA8`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.7857 | 7.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The source-shaped by-value vector signature forced an unused ABI copy to the stack; the disabled target body contains only the diagnostic call.

### Attempt 2 notes

The disabled damage path leaves only the released diagnostic call using the target string address.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released radius-damage diagnostic stub matched exactly.
