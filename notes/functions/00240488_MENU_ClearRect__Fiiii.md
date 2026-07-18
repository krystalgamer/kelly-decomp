# MENU_ClearRect__Fiiii

- Address: `0x00240488`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target and released configuration reduce this front-end hook to an empty method. The guarded candidate matched on the first attempt.

## Outcome

The target and released configuration reduce MENU_ClearRect(int, int, int, int) to an empty hook. The first candidate matched exactly and preserved the byte-identical integrated ROM.
