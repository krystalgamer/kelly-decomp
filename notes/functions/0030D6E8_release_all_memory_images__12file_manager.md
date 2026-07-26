# release_all_memory_images__12file_manager

- Address: `0x0030D6E8`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/file_manager.cpp`
- Reference source: `KS/SRC/File_manager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.2083 | 0.0 | `candidate.cpp` |
| 2 | different | 5.2083 | 0.0 | `candidate.cpp` |
| 3 | different | 5.2083 | 0.0 | `candidate.cpp` |
| 4 | different | 5.2083 | 0.0 | `candidate.cpp` |
| 5 | different | 5.2083 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The released `file_cache.dispose()` call remained out of line in the reduced
AVL declaration, while the target flattened node and memory-image disposal.

### Attempt 5 notes

Return-value and compiler-barrier variants could not recover the missing AVL
implementation context.

## Outcome

The released file-cache disposal required unavailable flattened AVL node and memory-image cleanup context after five source attempts.
