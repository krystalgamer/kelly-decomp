# _$_20max_turn_rate_attrib

- Address: `0x00145338`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity_hard_attribs.h`
- Reference source: `KS/SRC/entity_hard_attribs.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 2 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 3 | different | 33.3333 | 25.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty destructor collapses to a 36-byte sibling delete form.

Two additional native empty-body forms retain the same schedule.

## Outcome

The prior match manually restored the vtable and used a compiler barrier. It
was removed and the destructor was deferred.
