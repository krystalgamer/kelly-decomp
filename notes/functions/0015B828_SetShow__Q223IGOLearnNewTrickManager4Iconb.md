# SetShow__Q223IGOLearnNewTrickManager4Iconb

- Address: `0x0015B828`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Reference source: `KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The nested icon's `show` flag is stored at offset `0x68`. Modeling the
nested class preserved the old GCC qualified-name mangling and target store.

## Outcome

The nested learn-trick icon show flag is stored at offset 0x68. Modeling the nested class preserved the qualified-name mangling, matched immediately, and kept the full ROM exact.
