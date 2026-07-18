# binary_extension__17entity_track_tree

- Address: `0x00114E60`
- Size: `0xC` (12 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 66.6667 | `candidate.cpp` |
| 2 | different | 83.3333 | 33.3333 | `candidate.cpp` |
| 3 | different | 91.6667 | 66.6667 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released function returns the platform animation extension literal. Direct integer casts selected `ori`; a local absolute equate reproduced the target's linker-style adjusted-high `lui`/`addiu` sequence on attempt four.

## Outcome

The released `entity_track_tree::binary_extension` constant pointer matched on attempt four after reproducing the target's adjusted-high address materialization.
