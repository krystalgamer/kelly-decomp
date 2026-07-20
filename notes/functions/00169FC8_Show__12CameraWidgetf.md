# Show__12CameraWidgetf

- Address: `0x00169FC8`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_camera.cpp`
- Reference source: `KS/SRC/ks/igo_widget_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.4444 | 77.7778 | `candidate.cpp` |
| 2 | different | 22.2222 | 11.1111 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released assignment order was correct, but EE GCC reversed the independent show-time stores around the call.

### Attempt 2 notes

The store barrier fixed assignment order but let GCC write through a0 directly, removing the target v0 self copy.

### Attempt 3 notes

A minimal layout preserves the show-time fields at 0x7c/0x80 and the released fade update call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `CameraWidget::Show` implementation matched exactly.
