# _$_15slave_interface

- Address: `0x00145DE0`
- Size: `0x34` (52 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/slave_interface.h`
- Reference source: `KS/SRC/slave_interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.7692 | 0.0 | `candidate.cpp` |
| 2 | different | 5.7692 | 0.0 | `candidate.cpp` |
| 3 | different | 5.7692 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 20-byte entity-interface
tail call.

## Outcome

The target's inlined base cleanup required manual vtable restoration and a
compiler barrier. Those matching-only constructs were removed.
