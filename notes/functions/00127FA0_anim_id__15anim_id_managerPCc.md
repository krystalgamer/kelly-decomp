# anim_id__15anim_id_managerPCc

- Address: `0x00127FA0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.2632 | 89.4737 | `candidate.cpp` |
| 2 | different | 80.2632 | 89.4737 | `candidate.cpp` |
| 3 | different | 80.2632 | 89.4737 | `candidate.cpp` |
| 4 | different | 80.2632 | 89.4737 | `candidate.cpp` |
| 5 | different | 80.2632 | 89.4737 | `candidate.cpp` |

### Attempt 1 notes

The exact released char-pointer overload, using the shared real stringx declaration, reproduced all 76 bytes except the two argument setup instructions around the delegated member call were reversed.

### Attempt 2 notes

A normalized empty barrier before delegation did not change the call argument schedule, so the mismatch is not caused by motion across construction.

### Attempt 3 notes

Explicit this-qualified delegation retained the same two-instruction scheduling mismatch.

### Attempt 4 notes

Naming the receiver as a source-level local alias also produced identical code and scheduling.

### Attempt 5 notes

Naming the returned anim_id_t preserved the exact size and semantics but did not alter the delegated call argument order.

## Outcome

Deferred after five released-style forms matched 17 of 19 instructions; only delegated-call argument scheduling differs.
