# _$_20os_developer_options

- Address: `0x003130B0`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/ini_parser.h`
- Reference source: `KS/SRC/ini_parser.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.4565 | 6.5217 | `candidate.cpp` |
| 2 | different | 56.0976 | 24.3902 | `candidate.cpp` |
| 3 | different | 29.878 | 17.5 | `candidate.cpp` |
| 4 | different | 26.8293 | 5.0 | `candidate.cpp` |
| 5 | different | 45.7317 | 7.3171 | `candidate.cpp` |

## Outcome

Five released developer-options destructor variants reproduced member cleanup but not generated array and deleting-flag scheduling.
