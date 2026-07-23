# get_distance_fade_ok__C6entity

- Address: `0x00131630`
- Size: `0x54` (84 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.1429 | 42.8571 | `candidate.cpp` |
| 2 | different | 57.1429 | 42.8571 | `candidate.cpp` |
| 3 | different | 57.1429 | 42.8571 | `candidate.cpp` |
| 4 | different | 52.381 | 47.619 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released distance-fade conditions with reconstructed developer-options, entity, and visual-rep declarations. The minimal virtual declaration used the wrong target vtable slot and produced 80 bytes.

### Attempt 2 notes

Reconstructed the exact visual-rep vtable adjustment and function slots at 0x78/0x7c. Dispatch matched, but the compiler still chose an 80-byte branch-likely control flow instead of the target 84-byte epilogue branches.

### Attempt 3 notes

Stored the virtual result and added the matching-only exit barrier. It emitted no instruction and retained the same 80-byte shape.

### Attempt 4 notes

Added matching barriers to both released false-return branches. The body reached 84 bytes but used a different branch layout and scored lower.

### Attempt 5 notes

Expressed the target control flow with explicit layout structs, result local, and done label. The old compiler rejected the goto across the initialized visual-rep local.

## Outcome

Released entity::get_distance_fade_ok did not reproduce the target 84-byte branch layout after five source-level attempts.
