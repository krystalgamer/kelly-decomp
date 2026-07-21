# OnActivate__13CheatCodeMenu

- Address: `0x001D22F8`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 95.5882 | 88.2353 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Initial abbreviated setHigh declaration omitted its released default argument and did not compile.

### Attempt 2 notes

Restored the default argument, but same-class layout placed the vptr and cheats array four bytes early.

### Attempt 3 notes

Restored the released base/derived layout and virtual slot; the body matched exactly.

## Outcome

The exact released reorder and first-entry highlight behavior matches with the released base/derived layout.
