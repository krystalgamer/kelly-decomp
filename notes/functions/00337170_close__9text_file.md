# close__9text_file

- Address: `0x00337170`
- Size: `0x40` (64 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.25 | 12.5 | `candidate.cpp` |
| 2 | different | 92.1875 | 75.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released stash reset and os_file close paths match exactly; a narrow compiler barrier prevents an otherwise demonstrated tail call.

## Outcome

The released stash reset and os_file close paths match exactly; a narrow compiler barrier prevents an otherwise demonstrated tail call.
