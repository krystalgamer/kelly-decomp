# set_near_range__16light_propertiesf

- Address: `0x002CC968`
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
| 3 | different | 84.5238 | 80.9524 | `candidate.cpp` |
| 4 | different | 84.5238 | 80.9524 | `candidate.cpp` |
| 5 | different | 84.5238 | 80.9524 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released set_near_range body and inline recompute_range logic with exact light_properties offsets and constants. The compiler omitted one scheduler nop before the floating division.

### Attempt 2 notes

Made the denominator and 1.0f register value explicit with a non-emitting float boundary. The same 80-byte form remained.

### Attempt 3 notes

Used a separately assigned denominator matching the released arithmetic. Code generation was unchanged.

### Attempt 4 notes

Used an explicit register denominator and casted unit numerator. The compiler still omitted the target division scheduling nop.

### Attempt 5 notes

Constrained the computed reciprocal through a non-emitting float boundary before storing it. The compiler retained the same 80-byte sequence.

## Outcome

Released light_properties::set_near_range remained blocked by a scheduler-only floating division nop after five source-level attempts.
