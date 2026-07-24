# find__C11slc_managerPCc

- Address: `0x0034F540`
- Size: `0x80` (128 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.6176 | 11.7647 | `candidate.cpp` |
| 2 | different | 55.303 | 39.3939 | `candidate.cpp` |
| 3 | different | 55.303 | 39.3939 | `candidate.cpp` |
| 4 | different | 19.5312 | 9.375 | `candidate.cpp` |
| 5 | different | 55.303 | 39.3939 | `candidate.cpp` |

## Outcome

Deferred the released script-library class lookup after five source-level attempts; local object construction and tree lookup were reconstructed, but destructor branch shaping and prologue scheduling differed.
