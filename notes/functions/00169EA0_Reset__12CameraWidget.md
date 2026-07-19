# Reset__12CameraWidget

- Address: `0x00169EA0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_camera.cpp`
- Reference source: `KS/SRC/ks/igo_widget_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset delegates to `CameraWidget::Hide`; a barrier preserves the call wrapper.

## Outcome

The released `CameraWidget::Reset` wrapper matched exactly on the first attempt.
