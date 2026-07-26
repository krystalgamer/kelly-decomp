# init__13rumbleManager

- Address: `0x00241CE8`
- Size: `0xE4` (228 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/rumbleManager.cpp`
- Reference source: `KS/SRC/ks/rumbleManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.5965 | 3.5088 | `candidate-round1.cpp` |
| 2 | different | 17.9825 | 3.5088 | `candidate-round2.cpp` |
| 3 | different | 19.7368 | 5.2632 | `candidate-round3.cpp` |
| 4 | different | 17.9825 | 3.5088 | `candidate-round4.cpp` |
| 5 | different | 86.8421 | 71.9298 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released rumble initialization plus target-version null guards and verified subsystem offsets reached exact size, but global-base materialization and branch-likely scheduling remain different without instruction-emitting control.
