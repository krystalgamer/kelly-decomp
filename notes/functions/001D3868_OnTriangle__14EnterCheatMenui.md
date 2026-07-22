# OnTriangle__14EnterCheatMenui

- Address: `0x001D3868`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.3158 | 63.1579 | `candidate.cpp` |
| 2 | different | 98.6842 | 94.7368 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released body and member order were used first.  Aligning the shared
`PanelAnimManager` to the original matrix-bearing type restored the full
front-end base layout.  The built object retains one otherwise-unrepresented
word between `closing` and `closing_timer`; that source-version layout
divergence is recorded in the shared class.  `KELLY_DECOMP_COMPILER_BARRIER()`
emits no instruction and prevents the final sound call from becoming a sibling
tail jump.

## Outcome

Matched the released enter-cheat back handler with the shared original front-end and sound contexts.
