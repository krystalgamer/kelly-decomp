# camera_slide_to_orbit__6entityRC8vector3dffff

- Address: `0x00145158`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base orbit-slide hook's assertion is removed in the Final build, leaving
its `false` fallback. The five-argument signature matched immediately.

## Outcome

The base orbit-slide hook loses its assertion in the Final build and returns false. The complete first candidate matched exactly and preserved the integrated ROM checksum.
