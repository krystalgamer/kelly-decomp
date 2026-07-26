# _$_13LegalFrontEnd

- Address: `0x001BC110`
- Size: `0xC4` (196 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.3673 | 6.1224 | `candidate.cpp` |
| 2 | different | 18.3673 | 6.1224 | `candidate.cpp` |
| 3 | different | 18.3673 | 6.1224 | `candidate.cpp` |
| 4 | different | 19.3878 | 8.1633 | `candidate.cpp` |
| 5 | different | 19.3878 | 8.1633 | `candidate.cpp` |

## Outcome

Five attempts could not reproduce the destructor because the shipped FEGraphicalMenu multiple-inheritance teardown was flattened into the caller.
