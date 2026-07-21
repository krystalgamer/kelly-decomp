# render__9fluid_bar

- Address: `0x00342E10`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.7143 | 50.0 | `candidate.cpp` |
| 2 | different | 98.2143 | 92.8571 | `candidate.cpp` |
| 3 | different | 71.4286 | 71.4286 | `candidate.cpp` |
| 4 | different | 75.0 | 71.4286 | `candidate.cpp` |
| 5 | different | 71.4286 | 71.4286 | `candidate.cpp` |

### Attempt 1 notes

The released function begins translucent polygon submission, invokes the empty PS2 z-buffer setter, and delegates to the inherited widget renderer. The source-faithful calls and singleton address were tested directly.

### Attempt 2 notes

Carried the singleton through a nearby address anchor to preserve the released negative-low relocation and added an empty trailing barrier to prevent sibling-call conversion of the inherited render call. Both emit no instructions beyond the reconstructed calls.

### Attempt 3 notes

Pinned a constant address anchor with an empty barrier before applying the singleton's negative displacement. This preserves the target `lui 0x40` plus negative-offset load, while the trailing empty barrier preserves the ordinary final call.

### Attempt 4 notes

Pinned the translucent enum argument in its ABI register before the singleton anchor barrier to recover the released setup order. The barriers remain empty, but the singleton load still scheduled before rather than in the call delay slot.

### Attempt 5 notes

Declared the pinned singleton base before the ABI-bound polygon-type argument. The high half became correct, but the compiler still placed argument setup and the singleton load differently from the released schedule.

## Outcome

The released calls and empty PS2 z-buffer operation are reconstructed, but source-level variants could not simultaneously reproduce the negative-low singleton address and instruction schedule within five attempts. No prohibited byte forcing or instruction-emitting assembly was used.
