# set_cutoff_range__12light_sourcef

- Address: `0x002FFA20`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.h`
- Reference source: `KS/SRC/light.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `properties` at offset 0x200 and preserves the released inline delegation.

## Outcome

The inline `light_source::set_cutoff_range` wrapper matched exactly on the first attempt.

## Matching-only annotation

`KELLY_DECOMP_COMPILER_BARRIER()` is not recovered original source and emits
no instruction. The source-faithful wrapper was otherwise eligible for EE GCC
sibling-call or scheduling changes; the annotation preserves the target's
normal call/return ordering.
