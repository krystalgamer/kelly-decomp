# _$_14entity_trigger

- Address: `0x002B9028`
- Size: `0x9C` (156 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.h`
- Reference source: `KS/SRC/trigger.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reused the generated trigger cleanup pattern after verifying entity_trigger adds only trivially destructible fields.

## Outcome

Matched entity trigger destruction
