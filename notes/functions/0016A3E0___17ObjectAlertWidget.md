# __17ObjectAlertWidget

- Address: `0x0016A3E0`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_objectalert.cpp`
- Reference source: `KS/SRC/ks/igo_widget_objectalert.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Created the shared source-faithful ObjectAlertWidget header from the released class, reused the shared IGOWidget declaration, consolidated the Hide and SetDisplay selector declarations, rebuilt existing selectors, and used the exact released constructor body.

## Outcome

The released ObjectAlertWidget constructor matches exactly against the shared declarations.
