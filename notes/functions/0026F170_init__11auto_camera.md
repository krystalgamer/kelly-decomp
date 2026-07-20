# init__11auto_camera

- Address: `0x0026F170`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the virtual `Reset` adjustment and function slots.

## Outcome

The released `auto_camera::init` virtual wrapper matched exactly.
