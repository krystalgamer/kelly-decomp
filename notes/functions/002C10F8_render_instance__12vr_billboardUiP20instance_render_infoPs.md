# render_instance__12vr_billboardUiP20instance_render_infoPs

- Address: `0x002C10F8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the released flavor overload's virtual `render_batch` call through slot 0xa8 and inserted constant 1.

## Outcome

The released flavor `vr_billboard::render_instance` overload matched exactly on the first attempt.
