# __8materialRC7stringxUiUi

- Address: `0x003392F0`
- Size: `0x108` (264 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the exact released PS2 constructor body and the implicit member-initialization declarations needed for `material`, `anim_texture`, `stringx`, vectors, and `color32`. The single test compile failed because the candidate guard checked `TARGET_PS2`, while the isolated compiler defines `SN_TARGET_PS2`/`PS2`; no further variant was attempted.

## Outcome

The exact released material constructor failed the isolated compile in its PS2 macro declaration context; the sole attempt scored 0%.
