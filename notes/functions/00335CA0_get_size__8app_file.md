# get_size__8app_file

- Address: `0x00335CA0`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/file.cpp`
- Reference source: `KS/SRC/file.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.25 | 85.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released app_file body and declaration, including CFT_TEXT/CFT_BINARY, use_stash, binary, and stash members. Reconstructed the released member offsets and retained the exact branch/body spelling.

## Outcome

Matched released app_file::get_size body
