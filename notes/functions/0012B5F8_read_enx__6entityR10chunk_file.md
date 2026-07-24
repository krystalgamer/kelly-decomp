# read_enx__6entityR10chunk_file

- Address: `0x0012B5F8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.5714 | 22.8571 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 93.5484 | 93.5484 | `candidate.cpp` |
| 4 | different | 93.5484 | 93.5484 | `candidate.cpp` |
| 5 | different | 93.5484 | 93.5484 | `candidate.cpp` |

## Outcome

Deferred entity::read_enx after five source-level attempts; the released loop rotation, serial reads, label-length test, virtual chunk handler, and cleanup reproduced at 93.5%, but the target prologue save scheduling did not.
