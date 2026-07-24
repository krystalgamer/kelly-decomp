# DelEntry__4MenuP9MenuEntry

- Address: `0x0023E608`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.9355 | 12.9032 | `candidate.cpp` |
| 2 | different | 41.9355 | 12.9032 | `candidate.cpp` |
| 3 | different | 41.9355 | 12.9032 | `candidate.cpp` |
| 4 | different | 12.9032 | 0.0 | `candidate.cpp` |
| 5 | different | 54.0323 | 12.9032 | `candidate.cpp` |

## Outcome

Deferred Menu::DelEntry after five source-level attempts; the released first-entry check, pointer shift loop, resize, and early return reproduced, but the target outer-loop register and branch-likely scheduling did not.
