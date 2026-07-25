# __4itemRC9entity_idUi

- Address: `0x00288B50`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.3684 | 92.1053 | `candidate.cpp` |
| 2 | different | 98.0263 | 92.1053 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Reconstructed the released entity base call and all item defaults. Correcting the negative-low item vtable and binding its register matched on attempt 3.

## Outcome

Matched item constructor
