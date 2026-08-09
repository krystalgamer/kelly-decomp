# going_out_of_service__20ai_locomotion_direct

- Address: `0x00109CC8`
- Size: `0x38` (56 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.7143 | 85.7143 | `candidate.cpp` |
| 2 | different | 85.7143 | 85.7143 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released get_my_entity, kill_anim, and base-service-exit calls. EE GCC loaded the animation slot before moving the returned entity into a0; the target moves the entity first and fills a1 in the call delay slot.

### Attempt 2 notes

Called kill_anim through an ABI-named free-function declaration. Argument scheduling remained identical to attempt 1.

### Attempt 3 notes

Fixed-register arguments and empty compiler barriers reproduce the target
instruction scheduling exactly, but are matching-only controls rather than
released source.

## Outcome

The matching-only register and barrier controls were removed. Native calls
schedule the animation-slot argument one instruction too early, so the method
was deferred.
