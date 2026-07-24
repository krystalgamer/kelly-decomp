# Update__12CameraWidgetf

- Address: `0x00169EC0`
- Size: `0x8C` (140 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_camera.cpp`
- Reference source: `KS/SRC/ks/igo_widget_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.3947 | 55.2632 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released camera-widget update matched after restoring the base vtable word in the layout and blocking the conditional Hide tail call.

## Outcome

The released camera-widget update matched exactly on the second attempt.
