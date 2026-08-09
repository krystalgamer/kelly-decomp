# _$_13motion_object

- Address: `0x002FF078`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/mobject.h`
- Reference source: `KS/SRC/mobject.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 8.3333 | `candidate.cpp` |
| 2 | different | 20.8333 | 8.3333 | `candidate.cpp` |
| 3 | different | 20.8333 | 8.3333 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 36-byte sibling-delete
sequence.

## Outcome

The target's direct-delete frame required manual vtable restoration and a
compiler barrier. Those matching-only constructs were removed.
