# isCheatUnlocked__C15GlobalDataClassi

- Address: `0x002EFFC8`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate checks the persistent and session Cheat locked flags in order. The recovered GlobalDataClass offset, Cheat stride, and original short-circuit expression match exactly.

## Outcome

The original persistent-or-session cheat unlock predicate matches exactly with the recovered class layout and Cheat stride.
