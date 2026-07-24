# make_instance__C14morphable_itemRC9entity_idUi

- Address: `0x0028BCA8`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 84.375 | `candidate.cpp` |
| 2 | different | 83.5938 | 81.25 | `candidate.cpp` |
| 3 | different | 87.5 | 84.375 | `candidate.cpp` |
| 4 | different | 82.8125 | 81.25 | `candidate.cpp` |
| 5 | different | 73.4375 | 68.75 | `candidate.cpp` |

## Outcome

Deferred the released morphable-item instance factory after five source-level attempts; allocation, construction, and virtual copy matched semantically, but prologue and constructor-argument scheduling differed.
