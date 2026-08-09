# _$_16beam_effect_type

- Address: `0x002B95E0`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.1667 | 25.0 | `candidate.cpp` |
| 2 | different | 29.1667 | 25.0 | `candidate.cpp` |
| 3 | different | 29.1667 | 25.0 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 36-byte sibling-delete
sequence.

## Outcome

The target's 48-byte direct-delete frame required a manual vtable write and
compiler barrier. Those matching-only constructs were removed.
