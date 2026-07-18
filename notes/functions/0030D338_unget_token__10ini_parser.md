# unget_token__10ini_parser

- Address: `0x0030D338`
- Size: `0xC` (12 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/ini_parser.cpp`
- Reference source: `KS/SRC/ini_parser.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets the byte token-ready flag at offset `0x208`.

## Outcome

The released `ini_parser::unget_token` byte store matched exactly on the first attempt.
