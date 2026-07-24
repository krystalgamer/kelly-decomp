# AddEntries__4MenuiPP9MenuEntry

- Address: `0x0023E5A8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.6522 | 56.5217 | `candidate.cpp` |
| 2 | different | 70.6522 | 56.5217 | `candidate.cpp` |
| 3 | different | 55.4348 | 39.1304 | `candidate.cpp` |
| 4 | different | 55.4348 | 39.1304 | `candidate.cpp` |
| 5 | different | 70.6522 | 56.5217 | `candidate.cpp` |

## Outcome

Released Menu::AddEntries loop consistently lacked the target post-call scheduling nop after five distinct for/while and declaration candidates.
