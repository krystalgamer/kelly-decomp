# _$_31character_hard_attrib_interface

- Address: `0x00313398`
- Size: `0x70` (112 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/hard_attrib_interface.h`
- Reference source: `KS/SRC/hard_attrib_interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.9643 | 0.0 | `candidate.cpp` |
| 2 | different | 90.1786 | 67.8571 | `candidate.cpp` |
| 3 | different | 59.8214 | 32.1429 | `candidate.cpp` |
| 4 | different | 36.2069 | 20.6897 | `candidate.cpp` |
| 5 | different | 91.0714 | 71.4286 | `candidate.cpp` |

## Outcome

Deferred character hard-attribute interface destructor after five source-level attempts; all released subobject vtable resets and deletion semantics reproduced, but the target constant-load and store scheduler order did not.
