# make_entity_id__9entity_idPCc

- Address: `0x001D85C0`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.3043 | 4.3478 | `candidate.cpp` |
| 2 | different | 54.7619 | 47.619 | `candidate.cpp` |
| 3 | different | 26.1364 | 13.6364 | `candidate.cpp` |
| 4 | different | 54.7619 | 47.619 | `candidate.cpp` |
| 5 | different | 54.7619 | 47.619 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released static-local make_entity_id body with reconstructed guard, result object, and set_entity_id helper. Separate absolute aliases caused duplicated high-address setup and a 92-byte body.

### Attempt 2 notes

Hoisted the static result pointer before the guard. This reached 84 bytes but formed the full pointer before the branch instead of preserving the target high base register.

### Attempt 3 notes

Represented the static result as an offset within its 0x00510000 storage base. The compiler generated an 88-byte branch form and did not match.

### Attempt 4 notes

Used a raw entity_id layout and helper call while hoisting the result pointer. It reproduced the same 84-byte non-target address schedule as attempt 2.

### Attempt 5 notes

Restored the class helper form and made the invalid initial value a const local. The same 84-byte address schedule remained.

## Outcome

Released entity_id::make_entity_id did not reproduce the target static-local address schedule after five source-level attempts.
