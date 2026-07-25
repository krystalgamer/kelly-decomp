# get_hard_attrib_str__C31character_hard_attrib_interfaceR7pstring

- Address: `0x00313620`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/hard_attrib_interface.h`
- Reference source: `KS/SRC/hard_attrib_interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.4524 | 54.7619 | `candidate.cpp` |
| 2 | different | 49.3902 | 39.0244 | `candidate.cpp` |
| 3 | different | 70.8333 | 59.5238 | `candidate.cpp` |
| 4 | different | 70.8333 | 59.5238 | `candidate.cpp` |
| 5 | different | 70.8333 | 59.5238 | `candidate.cpp` |

## Outcome

Five released pstring lookup variants reproduced comparison and copy semantics but not GCC2 copy-loop delay-slot scheduling.
