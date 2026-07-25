# __4beamRC9entity_idUi15entity_flavor_t

- Address: `0x00271148`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.8049 | 25.7143 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 35.9756 | 13.8889 | `candidate.cpp` |
| 4 | different | 57.9268 | 80.0 | `candidate.cpp` |
| 5 | different | 60.3659 | 47.2222 | `candidate.cpp` |

## Outcome

Five released beam-construction variants reproduced initialization but not GCC2 empty-member constructor padding.
