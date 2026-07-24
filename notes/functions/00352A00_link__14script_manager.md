# link__14script_manager

- Address: `0x00352A00`
- Size: `0x64` (100 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.0 | 26.087 | `candidate.cpp` |
| 2 | different | 24.0741 | 3.7037 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 25.0 | 3.7037 | `candidate.cpp` |
| 5 | different | 44.0 | 26.087 | `candidate.cpp` |

## Outcome

Released script-manager object-list linking was reconstructed across five candidates, but stack iterator placement and load-delay scheduling did not match.
