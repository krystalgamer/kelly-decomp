# _$_17entity_controller

- Address: `0x002755D8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/controller.cpp`
- Reference source: `KS/SRC/controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `candidate.cpp` |
| 2 | different | 6.25 | 0.0 | `candidate.cpp` |
| 3 | different | 6.25 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty destructor and two equivalent native forms collapse to a
20-byte vtable-setting tail call to the `controller` destructor.

## Outcome

The target's 48-byte direct-delete frame required manual vtable restoration and
a compiler barrier. Those matching-only constructs were removed and the
destructor was deferred.
