# make_instance__C16rectangle_markerRC9entity_idUi

- Address: `0x0028C5D0`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.cpp`
- Reference source: `KS/SRC/marker.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 65.7895 | `candidate.cpp` |
| 2 | different | 88.1579 | 84.2105 | `candidate.cpp` |
| 3 | different | 62.1795 | 51.2821 | `candidate.cpp` |
| 4 | different | 82.8947 | 78.9474 | `candidate.cpp` |
| 5 | different | 88.1579 | 84.2105 | `candidate.cpp` |

## Outcome

Five released-source marker factory variants reproduced allocation, construction, copy, and radii, but prologue and initialization scheduling did not match.
