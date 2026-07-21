# writeText__FiPc

- Address: `0x002427C8`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/rumbleManager.cpp`
- Reference source: `KS/SRC/ks/rumbleManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.1765 | 100.0 | `writetext_candidate.cpp` |
| 2 | different | 91.1765 | 100.0 | `writetext_candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `writetext_candidate.cpp` |

## Outcome

Released writeText wrapper matched exactly on attempt 3 using the released sceWrite/strlen call sequence; integrated and verified against the ROM checksum and reference checks.
