# despawn__14surfing_object

- Address: `0x002028F0`
- Size: `0xE8` (232 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 90.9483 | 89.6552 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate-4-consolidated.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate-5-canonical.cpp` |

### Attempt 1 notes

Prepared the exact released despawn body with source-faithful surfing/water/beach member order, canonical entity methods, trail, and sound declarations. Compilation failed because the scratch surfing class omitted its released non-default constructor while inheriting a base with only non-default construction; no code-generation conclusion was drawn.

### Attempt 2 notes

Added the released constructor declaration so the source-faithful class context compiled. All offsets, trail/sound handling, entity color/visibility/activity dispatch, and 57 of 58 instructions matched. EE GCC only converted the final qualified water-object despawn into a sibling tail call, shortening the function by one instruction.

### Attempt 3 notes

Added a zero-instruction compiler barrier after the qualified `water_object::despawn()` call. This prevented sibling-call conversion and matched all 232 bytes and 58 instructions exactly; the released behavior is unchanged.

### Attempt 4 notes

Revalidated the exact match after extending canonical floatobj, entity render-color, trail, and SoundScript declarations.

### Attempt 5 notes

Revalidated the byte-exact released body against the expanded canonical floatobj/entity/SoundScript/trail declarations. The one-time incremental rebuild scheduled 44 jobs (39 CXX), completed in 71 seconds, and passed the exact ROM gate; the reusable surfing_object context amortizes across future floatobj functions.

## Outcome

Matched the exact released surfing-object despawn using the canonical reusable floatobj hierarchy, entity render-color helper, SoundScript event end, trail destroy binding, and a zero-instruction base-call barrier. The one-time 44-job rebuild completed in 71 seconds and passed ROM/reference.
