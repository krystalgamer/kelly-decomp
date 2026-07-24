# Retry__15PauseMenuSystem

- Address: `0x001B4920`
- Size: `0x60` (96 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 17.8571 | `candidate.cpp` |
| 2 | different | 39.4231 | 19.2308 | `candidate.cpp` |
| 3 | different | 27.7778 | 11.1111 | `candidate.cpp` |
| 4 | different | 92.7083 | 79.1667 | `candidate.cpp` |
| 5 | different | 95.8333 | 91.6667 | `candidate.cpp` |

## Outcome

Released pause Retry reached 22/24 matching instructions and 95.83%, but S0/RA save ordering remained reversed after five source-level control/register candidates.
