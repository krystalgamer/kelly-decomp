# get_unadjusted_value__C7po_animRC14anim_control_tP8vector3d

- Address: `0x0011C128`
- Size: `0x48` (72 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.2222 | 88.8889 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body and reconstructed the animation track flag prefix and overload declarations.

### Attempt 2 notes

Adjusted the released track virtual declaration to the target ABI slot count after the first diff showed the call at offset 104 instead of 48.

## Outcome

The released current-time unadjusted position accessor matches exactly.
