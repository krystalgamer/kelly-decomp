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

The released current-menu close and base MenuRender close match exactly; the reviewed empty barrier narrowly prevents the demonstrated final base-call tail optimization.

## Outcome

The released current-menu close and base renderer close match exactly with one reviewed barrier preventing a demonstrated tail optimization.
