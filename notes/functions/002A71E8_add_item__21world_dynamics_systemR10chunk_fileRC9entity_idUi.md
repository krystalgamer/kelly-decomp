# add_item__21world_dynamics_systemR10chunk_fileRC9entity_idUi

- Address: `0x002A71E8`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.2941 | 82.3529 | `candidate.cpp` |
| 2 | different | 81.6176 | 79.4118 | `candidate.cpp` |
| 3 | different | 83.0882 | 82.3529 | `candidate.cpp` |
| 4 | different | 83.0882 | 73.5294 | `candidate.cpp` |
| 5 | different | 77.9412 | 73.5294 | `candidate.cpp` |

## Outcome

Deferred the released chunk item creation wrapper after five source-level attempts; debug allocation, construction, world insertion, and return were reconstructed, but constructor argument/prologue scheduling remained different.
