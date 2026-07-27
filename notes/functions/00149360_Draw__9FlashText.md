# Draw__9FlashText

- Address: `0x00149360`
- Size: `0x10C` (268 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7761 | 2.9851 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS A5, reduced scope. No prior attempts existed. Tested one self-contained candidate reproducing the released FlashText draw logic: when flashing, interpolate the two stored colors using `flash_alpha + 0.5f`, preserve the second color alpha, assign the base text color, then call `TextString::Draw()`. Included only the required `color32`, `TextString`, and `FlashText` declarations. The candidate compiled but differed (19.7761% bytes, 2.9851% instructions); no variants were attempted.

## Outcome

The exact released flash-text draw definition differed from the target; the sole attempt scored 19.7761%.
