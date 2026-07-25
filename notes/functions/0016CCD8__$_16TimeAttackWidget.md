# _$_16TimeAttackWidget

- Address: `0x0016CCD8`
- Size: `0xA4` (164 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_timeattack.cpp`
- Reference source: `KS/SRC/ks/igo_widget_timeattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.9756 | 82.9268 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released three owned TextString deletions matched after retaining the non-tail base-destructor call with an empty compiler barrier on Sol attempt two.

## Outcome

Matched TimeAttackWidget destruction and base cleanup.
