# _$_14region_trigger

- Address: `0x002B8F00`
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

Reused the generated trigger cleanup pattern after verifying region_trigger has no additional members requiring destruction.

## Outcome

Matched region trigger destruction
