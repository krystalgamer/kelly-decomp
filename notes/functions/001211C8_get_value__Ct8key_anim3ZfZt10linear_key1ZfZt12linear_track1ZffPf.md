# get_value__Ct8key_anim3ZfZt10linear_key1ZfZt12linear_track1ZffPf

- Address: `0x001211C8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released specialization initially used dependent-template `typename` spelling that this explicit specialization context rejects under the supplied EE GCC.

### Attempt 2 notes

The exact released arbitrary-time key scan and interpolation matched after adapting only the explicit-specialization iterator spelling, while reusing the shared key_anim, linear_key, and linear_track declarations.

## Outcome

Matched arbitrary-time scalar keyframe evaluation using shared released animation templates.
