# Show__12CameraWidgetf

- Address: `0x00169FC8`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_camera.cpp`
- Reference source: `KS/SRC/ks/igo_widget_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.3333 | 0.0 | `size36-camera-show-1.cpp` |
| 2 | different | 11.1111 | 11.1111 | `size36-camera-show-2.cpp` |
| 3 | different | 8.3333 | 0.0 | `size36-camera-show-3.cpp` |

### Attempt 1 notes

The exact released body compiles as a 16-byte sibling call instead of the target 36-byte retained call frame.

### Attempt 2 notes

Reversing the two identical-value assignments reproduces the target store order but still emits a 16-byte sibling call.

### Attempt 3 notes

Copying `this` to a local before the released assignments also emits the same 16-byte sibling-call shape.

## Outcome

The barrier- and fixed-register-dependent body was removed and the original target function was deferred.
