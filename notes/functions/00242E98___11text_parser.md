# __11text_parser

- Address: `0x00242E98`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/text_parser.cpp`
- Reference source: `KS/SRC/ks/text_parser.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor clears `buffer` at `0x44` and `script_ptr` at `0x48`, then returns `this`.

## Outcome

The released `text_parser` constructor matched exactly on the first attempt.
