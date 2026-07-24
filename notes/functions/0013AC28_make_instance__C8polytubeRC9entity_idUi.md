# make_instance__C8polytubeRC9entity_idUi

- Address: `0x0013AC28`
- Size: `0x80` (128 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/polytube.cpp`
- Reference source: `KS/SRC/polytube.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 84.375 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 85.9375 | 81.25 | `candidate.cpp` |
| 4 | different | 87.5 | 84.375 | `candidate.cpp` |
| 5 | different | 87.5 | 87.5 | `candidate.cpp` |

## Outcome

Deferred the released polytube instance factory after five source-level attempts; allocation, construction, and virtual copy matched semantically, but five prologue and constructor-argument scheduling instructions differed.
