# clear_level_context__12file_manager

- Address: `0x0030DEA8`
- Size: `0x60` (96 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/file_manager.cpp`
- Reference source: `KS/SRC/File_manager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.125 | 75.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released cache/context/stash/release sequence and layouts. A final-call continuation barrier matched on attempt 2.

## Outcome

Matched file manager level cleanup
