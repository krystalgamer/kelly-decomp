# __12light_sourceRC16light_propertiesP6entityRC9entity_id

- Address: `0x002CCFC0`
- Size: `0x104` (260 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.0769 | 1.5385 | `candidate.cpp` |

### Attempt 1 notes

Released-source first-pass candidate. The constructor body and initializer list are verbatim from KS/SRC/light.cpp:188-196; only isolated supporting declarations were supplied. Tested exactly once: different, 23.0769% byte score and 1.5385% instruction score. No tuning or subsequent attempt was performed.

## Outcome

The exact released light-source constructor differed from the target; the sole attempt scored 23.0769%.
