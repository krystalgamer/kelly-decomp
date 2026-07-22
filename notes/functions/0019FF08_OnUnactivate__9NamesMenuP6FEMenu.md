# OnUnactivate__9NamesMenuP6FEMenu

- Address: `0x0019FF08`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.6842 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 95.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and shared original FEMenuEntry layout matched all behavior and virtual dispatch; the direct absolute frontendmanager binding missed the signed-low high-half adjustment.

### Attempt 2 notes

Using the assembler's adjusted absolute representation emits the target load whose signed low immediate reaches the real frontendmanager.col_info_b address. The symbol annotation emits no instructions.

## Outcome

Matched the released names menu deactivation using shared FEMenuEntry, SaveLoad, and front-end manager declarations.
