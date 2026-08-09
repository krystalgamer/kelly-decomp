# _$_18collision_geometry

- Address: `0x002D8658`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
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

The target's 48-byte direct-delete frame required manual vtable restoration and
a compiler barrier. Those matching-only constructs were removed.
