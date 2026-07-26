# set_translate__2poRC8vector3d

- Address: `0x00348440`
- Size: `0xBC` (188 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.4894 | 0.0 | `candidate.cpp` |
| 2 | different | 99.4681 | 97.8723 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released body with an implicit vector assignment used 64-bit loads and
stores because the reduced declaration lacked `vector4d`'s released
component-wise assignment operator.

### Attempt 2 notes

Restoring the released `vector4d` assignment produced every target
instruction, with only the absolute identity-matrix high half differing.

### Attempt 3 notes

The exact released body matched after binding the translation unit's local
identity matrix with the old assembler's required signed-low carry bias.

## Outcome

Matched the released translation-matrix initialization with source-faithful vector assignment.
