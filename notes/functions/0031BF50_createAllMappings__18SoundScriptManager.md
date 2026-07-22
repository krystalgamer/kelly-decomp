# createAllMappings__18SoundScriptManager

- Address: `0x0031BF50`
- Size: `0x48` (72 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 93.75 | `candidate.cpp` |
| 2 | different | 47.2222 | 81.25 | `candidate.cpp` |
| 3 | different | 58.3333 | 93.75 | `candidate.cpp` |
| 4 | different | 54.1667 | 22.2222 | `candidate.cpp` |
| 5 | different | 56.9444 | 87.5 | `candidate.cpp` |

## Outcome

Recovered the released SoundScriptManager/EventMapType layout in a shared header. The exact released loop emitted every semantic instruction but omitted two target scheduler nops after the clear call; five source-only loop forms could not preserve them.
