# is_looping__C11beam_effect

- Address: `0x002B8490`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.5 | 20.0 | `candidate.cpp` |
| 2 | different | 72.5 | 60.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The faithful float comparison lacked the target EE hazard nop between `mtc1` and `c.le.s`, producing a 36-byte function.

### Attempt 2 notes

The explicit hazard nop produced the right length, but declaring zero first reversed the target field-load/zero-materialization order and swapped FPU registers.

### Attempt 3 notes

The released predicate treats every nonnegative loop delay as looping. A documented matching-only `nop` preserves the target EE FPU hazard slot between `mtc1` and the comparison.

## Outcome

The released `beam_effect::is_looping` predicate matched exactly.
