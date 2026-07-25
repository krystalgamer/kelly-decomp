# OnCross__12MainFrontEndi

- Address: `0x0017FE98`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.6122 | 22.449 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released handler matched after extending shared input, sound-script, FEMenu-entry, FEMultiMenu, and MainFrontEnd declarations faithfully. An explicit active-menu early return preserves the shipped branch layout; the compiler barrier emits no instruction and prevents only a sibling call to the base OnCross method.

## Outcome

Matched the released main front-end cross handler with shared input, sound, and menu declarations.
