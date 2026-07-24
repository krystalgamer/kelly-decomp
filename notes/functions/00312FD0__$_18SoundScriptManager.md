# _$_18SoundScriptManager

- Address: `0x00312FD0`
- Size: `0x68` (104 bytes)
- Object: `game/files_misfits`
- Debug source: `ks/SoundScript.h`
- Reference source: `KS/SRC/ks/SoundScript.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 10.0 | `candidate.cpp` |
| 2 | different | 25.0 | 10.0 | `candidate.cpp` |
| 3 | different | 40.7407 | 13.0435 | `candidate.cpp` |
| 4 | different | 12.5 | 2.7778 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred SoundScriptManager destructor after five source-faithful candidates; generated empty EventMapType array destruction and base-vtable scheduling did not reproduce
