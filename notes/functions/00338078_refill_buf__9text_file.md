# refill_buf__9text_file

- Address: `0x00338078`
- Size: `0x84` (132 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.9697 | 3.0303 | `candidate.cpp` |
| 2 | different | 22.1429 | 2.8571 | `candidate.cpp` |
| 3 | different | 37.5 | 14.7059 | `candidate.cpp` |
| 4 | different | 21.9697 | 3.0303 | `candidate.cpp` |
| 5 | different | 37.5 | 14.7059 | `candidate.cpp` |

## Outcome

Deferred the released text-file buffer refill after five source-level attempts; stash selection, both read paths, buffer reset, and stash restoration were reconstructed, but saved-register allocation remained different.
