# CloseMenu__10MenuSystem

- Address: `0x00241020`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released current-menu close uses the shared menu hierarchy. A local base
renderer-close pointer preserves the final framed call.

## Outcome

The local menu layouts and compiler barrier were removed.
