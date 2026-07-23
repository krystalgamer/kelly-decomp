# __12vr_billboardR10chunk_fileb

- Address: `0x002C07C0`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.5909 | 86.3636 | `candidate.cpp` |
| 2 | different | 87.5 | 86.3636 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released vr_billboard chunk constructor, visual_rep base call/type, billboard vtable/material offsets, mat_fac constructor, and internal_serial_in helper. Naming the material pointer while constraining the vtable to v1 reproduced the target interleaving on attempt 3.

## Outcome

Matched released vr_billboard chunk constructor
