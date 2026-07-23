# AnimBlended__22kellyslater_controller

- Address: `0x00212F30`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.7619 | 38.0952 | `candidate.cpp` |
| 2 | different | 60.7143 | 47.619 | `candidate.cpp` |
| 3 | different | 95.2381 | 85.7143 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 95.2381 | 85.7143 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released AnimBlended body with reconstructed owner/entity_anim_tree fields. The initial tree layout and compiler-selected branch form differed substantially.

### Attempt 2 notes

Reconstructed the released blend state as the target 0x48 subobject. Effective offsets aligned, but the compiler still selected a different branch/result layout.

### Attempt 3 notes

Expanded was_blended into explicit target-like labels and result flow. This reached 95.24%; only the two floating member loads and comparison operands were scheduled in the equivalent opposite order.

### Attempt 4 notes

Cached the two tween fields after the flag branch to force load order. The old compiler rejected the labels crossing initialized locals.

### Attempt 5 notes

Declared the tween locals before the labels and assigned them in released order. The compiler still reversed the equivalent two floating loads, leaving 95.24%.

## Outcome

Released AnimBlended remained blocked by an equivalent two-load floating comparison schedule after five source-level attempts.
