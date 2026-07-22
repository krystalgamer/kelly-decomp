# get_beach_location_name__4game

- Address: `0x00285570`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.6842 | 94.7368 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `game.cpp:5625-5628` body and extended
`game_shared.h` with the released string, beach-data, and method declarations.
The BeachData record is the retail 532 bytes.  Its absolute symbolic base uses
the established signed-low-half adjustment so the old assembler materializes
the actual `0x0042C198` address.

## Outcome

Matched the first-beach location-name return byte-for-byte.
