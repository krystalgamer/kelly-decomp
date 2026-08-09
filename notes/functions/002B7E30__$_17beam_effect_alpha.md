# _$_17beam_effect_alpha

- Address: `0x002B7E30`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 16.6667 | `candidate.cpp` |
| 2 | different | 16.6667 | 16.6667 | `candidate.cpp` |
| 3 | different | 16.6667 | 16.6667 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 20-byte tail call to the
`beam_effect_type` destructor.

## Outcome

The target's direct-delete frame required a manual base-vtable write and
compiler barrier. Those matching-only constructs were removed.
