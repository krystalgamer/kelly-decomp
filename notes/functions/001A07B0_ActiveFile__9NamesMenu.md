# ActiveFile__9NamesMenu

- Address: `0x001A07B0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 12.5 | `candidate.cpp` |
| 2 | different | 25.0 | 12.5 | `active_file_2.cpp` |
| 3 | matched | 100.0 | 100.0 | `active_file_3.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The canonical `NamesMenu` declaration now supplies both inherited menu
pointers. Expressing the null case as an explicit early return generates the
target branch-likely schedule.

## Outcome

`NamesMenu::ActiveFile` matched exactly after expressing the null case as an explicit early return.
