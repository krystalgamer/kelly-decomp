# _$_t15basic_attribute1Zf

- Address: `0x001453E0`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/attribute_template.h`
- Reference source: `KS/SRC/attribute_template.h`
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

The manual vtable restoration and compiler barrier were removed.
