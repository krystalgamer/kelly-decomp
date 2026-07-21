# delete_visrep__6entity

- Address: `0x00132370`
- Size: `0x38` (56 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released visual-representation null guard, unload call, and pointer clear matched exactly with my_visrep at offset 0x128.

## Outcome

The released entity visual-representation deletion matched exactly on the first attempt.
