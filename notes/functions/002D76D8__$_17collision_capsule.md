# _$_17collision_capsule

- Address: `0x002D76D8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-collision-camera.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-collision-camera-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-collision-camera-3.cpp` |

### Attempt 1 notes

The native empty destructor collapses to a 20-byte vptr-setting tail call.

### Attempt 2 notes

An explicit empty return produces the same native tail-call form.

### Attempt 3 notes

An explicit self reference is optimized away and produces the same form.

## Outcome

The manual-vtable implementation was removed after three native forms failed
to retain the target call frame.
