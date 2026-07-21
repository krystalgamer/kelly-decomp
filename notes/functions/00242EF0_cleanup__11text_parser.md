# cleanup__11text_parser

- Address: `0x00242EF0`
- Size: `0x40` (64 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/text_parser.cpp`
- Reference source: `KS/SRC/ks/text_parser.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.3125 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released cleanup behavior matched all instructions, but the initial helper declaration used the wrong external symbol.

### Attempt 2 notes

Binding the helper declaration to the released world-dynamics symbol matches exactly.

## Outcome

The released last-value restoration, file release, and script reset match exactly.
