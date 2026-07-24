# dump_threads__C13script_objectP7os_file

- Address: `0x00351B28`
- Size: `0x64` (100 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.0 | 8.6957 | `candidate.cpp` |
| 2 | different | 26.0 | 8.6957 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 26.0 | 8.6957 | `candidate.cpp` |
| 5 | different | 26.0 | 8.6957 | `candidate.cpp` |

## Outcome

Released instance-list thread dumping was reconstructed across five candidates, but the generated list iterator padding nops and prologue scheduling did not match.
