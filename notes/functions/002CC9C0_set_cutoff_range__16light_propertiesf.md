# set_cutoff_range__16light_propertiesf

- Address: `0x002CC9C0`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.5238 | 80.9524 | `candidate.cpp` |
| 2 | different | 84.5238 | 80.9524 | `candidate.cpp` |
| 3 | different | 89.2857 | 85.7143 | `candidate.cpp` |
| 4 | different | 84.5238 | 80.9524 | `candidate.cpp` |
| 5 | different | 84.5238 | 80.9524 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released set_cutoff_range body and inline recompute_range logic with exact light_properties offsets and constants. The compiler omitted one scheduler nop before the floating division.

### Attempt 2 notes

Made the denominator explicit while retaining released arithmetic. The same 80-byte form remained.

### Attempt 3 notes

Expressed recomputation as a conditional value assignment. This reached 89.29% at the exact size, but scheduled the reciprocal store before the return rather than in its delay slot and still lacked the target nop.

### Attempt 4 notes

Used an explicit early return and named numerator/denominator. The compiler returned to the 80-byte form.

### Attempt 5 notes

Constrained the 1.0f numerator through a non-emitting float boundary. The compiler still omitted the target division scheduling nop.

## Outcome

Released light_properties::set_cutoff_range remained blocked by a scheduler-only floating division nop after five source-level attempts.
