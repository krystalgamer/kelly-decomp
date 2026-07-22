# set_door__6entityb

- Address: `0x001310F0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.8947 | 5.2632 | `candidate.cpp` |
| 2 | different | 96.0526 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and shared entity layout emitted a sibling call to set_door_closed, shortening the function to 52 bytes.

### Attempt 2 notes

A normalized empty barrier after set_door_closed prevented the demonstrated sibling-call optimization and matched all target instructions; the unresolved callee relocation still differed in three bytes.

### Attempt 3 notes

Binding the existing released set_door_closed symbol address resolved the call relocation and produced an exact match. The barrier emits no target instruction and only prevents the demonstrated tail call.

## Outcome

Matched the released entity door setter with shared entity flags and a documented barrier preventing sibling-call merging.
