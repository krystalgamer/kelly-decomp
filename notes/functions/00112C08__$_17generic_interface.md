# _$_17generic_interface

- Address: `0x00112C08`
- Size: `0x30` (48 bytes)
- Object: `game/files_ai`
- Debug source: `entity_interface.h`
- Reference source: `KS/SRC/entity_interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 2 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 3 | different | 33.3333 | 25.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty destructor collapses to a 36-byte sibling delete form.

### Attempt 2 notes

An explicitly defaulted out-of-line destructor produces the same form.

### Attempt 3 notes

A qualified empty body retains the same sibling delete schedule.

## Outcome

The prior match manually restored the vtable and used a compiler barrier. It
was removed and the destructor was deferred.
