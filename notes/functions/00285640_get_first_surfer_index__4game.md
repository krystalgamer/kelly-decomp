# get_first_surfer_index__4game

- Address: `0x00285640`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `game.cpp:5658-5671` body and extended
`game_shared.h` with the released 652-byte SurferData stride and sort-order
field.

## Outcome

Matched the minimum nonnegative surfer sort-order scan byte-for-byte.
