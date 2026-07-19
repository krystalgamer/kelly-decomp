# TotalEntries__10MenuSystem

- Address: `0x00241130`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.8571 | 57.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `total_entries_2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released positive condition generated the opposite equivalent branch in isolation. Expressing the null case as an early return reproduces the target branch direction.

## Outcome

`MenuSystem::TotalEntries` matched exactly after spelling the null early-return form.
