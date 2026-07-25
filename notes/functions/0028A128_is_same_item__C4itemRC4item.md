# is_same_item__C4itemRC4item

- Address: `0x0028A128`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.5833 | 0.0 | `candidate.cpp` |
| 2 | different | 61.5385 | 43.5897 | `candidate.cpp` |
| 3 | different | 81.9444 | 61.1111 | `candidate.cpp` |
| 4 | different | 81.9444 | 61.1111 | `candidate.cpp` |
| 5 | different | 80.5556 | 55.5556 | `candidate.cpp` |

## Outcome

Five released-body variants could not reproduce both the target switch jump table and inlined string equality register allocation; the best reached 81.94% byte score.
