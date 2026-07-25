# parse_params__12beach_objectPPci

- Address: `0x001FAB80`
- Size: `0xAC` (172 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.9302 | 90.6977 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released parameter parsing matched on Sol attempt two after preserving the implicit beach-object vtable slot and exact string addresses.

## Outcome

Matched beach-object spawn parameter parsing.
