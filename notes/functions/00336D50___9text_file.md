# __9text_file

- Address: `0x00336D50`
- Size: `0x84` (132 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.9091 | 30.303 | `candidate.cpp` |
| 2 | different | 87.1212 | 24.2424 | `candidate.cpp` |
| 3 | different | 35.4167 | 13.8889 | `candidate.cpp` |
| 4 | different | 93.1818 | 30.303 | `candidate.cpp` |
| 5 | different | 37.8788 | 18.75 | `candidate.cpp` |

## Outcome

Deferred the released text-file constructor after five source-level attempts; os_file/stash construction and all buffer initialization matched semantically, but the pstring zeroing loop scheduled its pointer advance differently.
