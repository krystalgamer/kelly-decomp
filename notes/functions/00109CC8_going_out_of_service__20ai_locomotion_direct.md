# going_out_of_service__20ai_locomotion_direct

- Address: `0x00109CC8`
- Size: `0x38` (56 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **matched**

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

The released locomotion animation kill and base going_out_of_service calls matched exactly. The first empty matching barrier enforces target a0-before-a1 argument scheduling; the trailing barrier prevents a sibling tail call. Both emit no target instructions.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released ai_locomotion_direct service-exit method matched exactly.
