# init__16GenericGameSaver

- Address: `0x001E3F58`
- Size: `0xD0` (208 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.0192 | 40.3846 | `candidate.cpp` |
| 2 | different | 69.2308 | 63.4615 | `candidate.cpp` |
| 3 | different | 71.1538 | 65.3846 | `candidate.cpp` |
| 4 | different | 71.1538 | 65.3846 | `candidate.cpp` |
| 5 | different | 71.1538 | 65.3846 | `candidate.cpp` |

## Outcome

The released initialization flow reached 71.15%, but local stack-object scheduling and module-failure control flow remained irreducible after five source-level attempts.
