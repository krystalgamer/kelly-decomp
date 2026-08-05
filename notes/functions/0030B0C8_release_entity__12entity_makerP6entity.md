# release_entity__12entity_makerP6entity

- Address: `0x0030B0C8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 10.0 | `size40-engine-menu.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-release-entity-2.cpp` |

### Attempt 1 notes

The exact released body uses the shared pool accessor but collapses the
conditional release to a 28-byte sibling call.

### Attempt 2 notes

An ordinary local pool-release pointer retains the released conditional call
and target call frame.

## Outcome

The shared entity-pool accessor and local release call match without a compiler
barrier.
