# despacify_token__10ini_parserPc

- Address: `0x0030D030`
- Size: `0x7C` (124 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/ini_parser.cpp`
- Reference source: `KS/SRC/ini_parser.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released trailing-whitespace loop matched after reconstructing the PS2 ctype-table isspace macro at its exact address.

## Outcome

The released INI-token despacification helper matched exactly on the first attempt.
