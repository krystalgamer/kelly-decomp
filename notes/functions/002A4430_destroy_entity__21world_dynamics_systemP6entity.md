# destroy_entity__21world_dynamics_systemP6entity

- Address: `0x002A4430`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.2895 | 73.6842 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact flavor switch including item fallthrough, light removal, default removal, and virtual delete. Correcting the light-source symbol and preserving non-tail/null-check paths matched on attempt 2.

## Outcome

Matched world entity destruction
