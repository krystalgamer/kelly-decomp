# swimmer_ai__14surfing_objectR8vector3dT1f

- Address: `0x00207438`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released species-specific AI delegates directly to `floating_ai`; retaining the result across a barrier preserves the wrapper.

## Outcome

The released `surfing_object::swimmer_ai` forwarding wrapper matched exactly on the first attempt.
