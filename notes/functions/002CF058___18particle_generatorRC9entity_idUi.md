# __18particle_generatorRC9entity_idUi

- Address: `0x002CF058`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.3478 | 26.087 | `candidate.cpp` |
| 2 | different | 57.6087 | 39.1304 | `candidate.cpp` |
| 3 | different | 86.9565 | 69.5652 | `candidate.cpp` |
| 4 | different | 81.5217 | 73.913 | `candidate.cpp` |
| 5 | different | 95.6522 | 95.6522 | `candidate.cpp` |

## Outcome

Released particle_generator constructor reached 22/23 matching instructions after five ABI/layout/scheduling candidates; only the vector zero-store order remained different.
