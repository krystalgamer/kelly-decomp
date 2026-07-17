# SetShow__Q214IGOIconManager4Iconb

- Address: `0x00163D60`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The main icon manager's nested icon stores `show` at offset `0x78`. The
nested class model reproduced the qualified mangling and target store.

## Outcome

The main icon manager nested Icon stores its show flag at offset 0x78. Modeling the nested class preserved the qualified mangling, matched immediately, and kept the full ROM exact.
