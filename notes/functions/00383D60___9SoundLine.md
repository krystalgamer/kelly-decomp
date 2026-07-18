# __9SoundLine

- Address: `0x00383D60`
- Size: `0x8` (8 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.h`
- Reference source: `KS/SRC/ks/wave.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The compiler-generated `SoundLine` constructor only invokes empty `vector3d` constructors and reduces to returning `this`.

## Outcome

The implicit empty `SoundLine` construction behavior matched exactly on the first attempt.
