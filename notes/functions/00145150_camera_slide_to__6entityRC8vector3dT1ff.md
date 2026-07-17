# camera_slide_to__6entityRC8vector3dT1ff

- Address: `0x00145150`
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

The base slide hook's assertion is removed in the Final build, leaving its
`false` fallback. The complete parameter list matched on the first candidate.

## Outcome

The base camera slide hook loses its assertion in the Final build and returns false. The complete first candidate matched exactly and preserved the integrated ROM checksum.
