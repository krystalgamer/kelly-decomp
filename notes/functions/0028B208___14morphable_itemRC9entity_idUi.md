# __14morphable_itemRC9entity_idUi

- Address: `0x0028B208`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.5 | 0.0 | `candidate.cpp` |
| 2 | different | 7.5 | 0.0 | `candidate.cpp` |
| 3 | different | 7.5 | 0.0 | `candidate.cpp` |
| 4 | different | 7.5 | 0.0 | `candidate.cpp` |
| 5 | different | 7.5 | 0.0 | `candidate.cpp` |

## Outcome

Five released-source and explicit vector-reset variants reproduced morphable item initialization, but GCC2 inlined vector resize lowering did not match.
