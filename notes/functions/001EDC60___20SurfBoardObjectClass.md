# __20SurfBoardObjectClass

- Address: `0x001EDC60`
- Size: `0xE0` (224 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 53.5714 | 33.9286 | `candidate.cpp` |
| 3 | different | 53.5714 | 33.9286 | `candidate.cpp` |
| 4 | different | 48.6607 | 21.4286 | `candidate.cpp` |
| 5 | different | 53.5714 | 33.9286 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released SurfBoardObjectClass constructor reproduces the known layout and calls but omits target-only initialization at offsets 0xE8 and 0xEC; matching would require inventing fields or assignments absent from released declarations.
