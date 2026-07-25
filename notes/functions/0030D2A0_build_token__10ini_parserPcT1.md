# build_token__10ini_parserPcT1

- Address: `0x0030D2A0`
- Size: `0x98` (152 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/ini_parser.cpp`
- Reference source: `KS/SRC/ini_parser.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.4103 | 12.8205 | `candidate.cpp` |
| 2 | different | 20.2381 | 4.7619 | `candidate.cpp` |
| 3 | different | 31.4103 | 12.8205 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 11.2676 | 2.8169 | `candidate.cpp` |

## Outcome

Five exact parser loop variants reproduced token semantics, but target-specific character register allocation and branch-likely scheduling did not match.
