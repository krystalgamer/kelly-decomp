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

The shared text-file/stash declarations and a local `os_file::close` pointer
preserve both cleanup paths and the framed close call.

## Outcome

The compiler barrier was removed.
