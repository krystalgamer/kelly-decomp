# set_alpha_delta__11beam_effectUcUcfffb

- Address: `0x00272B18`
- Size: `0xF8` (248 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.629 | 67.7419 | `candidate.cpp` |

### Attempt 1 notes

Exact released `beam_effect::set_alpha_delta` body with the authentic effect hierarchy, 16-byte alpha effect, vtable, allocation macro, and layout. It emitted the same 112-byte frame and operations; the target retains one integer-to-float scheduling nop and selects the mode with the opposite branch layout, totaling 248 versus 244 bytes.

## Outcome

Exact released beam alpha effect differed only in conversion and mode-branch scheduling.
