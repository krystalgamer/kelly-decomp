# render_passes_needed__C6entity

- Address: `0x00133640`
- Size: `0xB4` (180 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 3 | different | 95.5556 | 91.1111 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body initially exposed a misplaced shared method declaration and did not compile.

### Attempt 2 notes

With corrected declarations, the released body and full visual_rep virtual order matched except for entity inheritance and the two entity virtual slots.

### Attempt 3 notes

Restoring the released `entity : public bone` inheritance placed the inherited vptr at offset eight and left only the motion-blur and motion-trail vtable slots different.

### Attempt 4 notes

The exact released body matched after extending the shared signaller, bone, entity, and visual_rep declarations with their source-faithful inheritance and virtual method order.

## Outcome

Matched entity render-pass selection using shared released inheritance and virtual declarations.
