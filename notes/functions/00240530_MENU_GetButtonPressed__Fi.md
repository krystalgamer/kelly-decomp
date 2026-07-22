# MENU_GetButtonPressed__Fi

- Address: `0x00240530`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.7778 | 44.4444 | `candidate.cpp` |
| 2 | different | 47.2222 | 38.8889 | `candidate.cpp` |
| 3 | different | 47.2222 | 38.8889 | `candidate.cpp` |
| 4 | different | 47.2222 | 38.8889 | `candidate.cpp` |
| 5 | different | 52.7778 | 44.4444 | `candidate.cpp` |

### Attempt 1 notes

The exact released input_mgr::inst() and equality body was tested with shared released device and axis declarations. It produced the same call and comparison but inverted the final floating branch, omitted one scheduler nop, and swapped the first two setup instructions.

### Attempt 2 notes

A local state with an inverted source condition reproduced the target branch direction and return delay slot, but retained the setup-order mismatch and missing hazard nop.

### Attempt 3 notes

Direct shared singleton access plus a normalized barrier around a named AXIS_MAX value did not alter the generated hazard schedule.

### Attempt 4 notes

A ternary return retained the same 68-byte nonmatching schedule.

### Attempt 5 notes

An explicit integer result variable restored the released body branch shape but retained the setup-order mismatch and missing nop.

## Outcome

Deferred after five source attempts. Source-faithful forms consistently compile to 68 bytes while the target contains a 72-byte schedule with an additional floating-point hazard nop that cannot be justified by the released source.
