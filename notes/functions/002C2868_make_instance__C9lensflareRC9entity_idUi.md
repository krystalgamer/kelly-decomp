# make_instance__C9lensflareRC9entity_idUi

- Address: `0x002C2868`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/lensflare.cpp`
- Reference source: `KS/SRC/lensflare.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.7188 | 81.25 | `candidate.cpp` |
| 2 | different | 87.5 | 84.375 | `candidate.cpp` |
| 3 | different | 83.5938 | 81.25 | `candidate.cpp` |
| 4 | different | 87.5 | 84.375 | `candidate.cpp` |
| 5 | different | 73.4375 | 59.375 | `candidate.cpp` |

## Outcome

Deferred the released lensflare instance factory after five source-level attempts; allocation, construction, and virtual copy matched semantically, but prologue and constructor-argument scheduling differed.
