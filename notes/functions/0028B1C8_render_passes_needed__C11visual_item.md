# render_passes_needed__C11visual_item

- Address: `0x0028B1C8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With disabled helper code removed, the released method returns the base entity result; a barrier preserves the wrapper.

## Outcome

The released `visual_item::render_passes_needed` wrapper matched exactly on the first attempt.
