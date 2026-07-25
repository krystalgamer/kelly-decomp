# __4itemR10chunk_fileRC9entity_id15entity_flavor_tUi

- Address: `0x00288C38`
- Size: `0xA8` (168 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.2143 | 92.8571 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released item initialization matched after retaining the derived vtable pointer in the target register on Sol attempt two.

## Outcome

Matched chunk-file item construction and default state setup.
