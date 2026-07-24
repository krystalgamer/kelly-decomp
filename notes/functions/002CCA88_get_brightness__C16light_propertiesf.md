# get_brightness__C16light_propertiesf

- Address: `0x002CCA88`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.0 | 28.0 | `candidate.cpp` |
| 2 | different | 50.0 | 28.0 | `candidate.cpp` |
| 3 | different | 50.0 | 28.0 | `candidate.cpp` |
| 4 | different | 60.1852 | 33.3333 | `candidate.cpp` |
| 5 | different | 50.0 | 28.0 | `candidate.cpp` |

## Outcome

Released light brightness calculation was reconstructed semantically, but the target requires an extra floating-pipeline nop slot that five source candidates could not emit without prohibited assembly.
