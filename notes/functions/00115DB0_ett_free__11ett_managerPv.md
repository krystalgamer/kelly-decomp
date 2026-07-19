# ett_free__11ett_managerPv

- Address: `0x00115DB0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.2857 | 85.7143 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released nonstatic manager hook forwards its pointer argument to `mem_free`; correcting the method shape produced the target argument move on attempt two.

## Outcome

The released `ett_manager::ett_free` wrapper matched on attempt two with the nonstatic method signature.

## Matching-only annotation

`KELLY_DECOMP_COMPILER_BARRIER()` is not recovered original source and emits
no instruction. The source-faithful wrapper was otherwise eligible for EE GCC
sibling-call or scheduling changes; the annotation preserves the target's
normal call/return ordering.
