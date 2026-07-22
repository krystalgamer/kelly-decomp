# OnCross__16SaveLoadFrontEndi

- Address: `0x0019B1E0`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 97.5 | 90.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Immutable reference source forwards to the active menu and otherwise takes the non-Xbox Select path. TARGET_XBOX remains gated out for this PS2 build, while the shared FEMultiMenu layout supplies the inherited active pointer and virtual dispatch.

## Outcome

matched SaveLoadFrontEnd OnCross
