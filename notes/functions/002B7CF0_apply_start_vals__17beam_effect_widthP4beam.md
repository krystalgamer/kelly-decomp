# apply_start_vals__17beam_effect_widthP4beam

- Address: `0x002B7CF0`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-beam-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-beam-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-beam-probes-3.cpp` |

## Outcome

All three shared-declaration forms load `start`, adjust to the beam, and tail-call `beam::set_thickness` in 12 bytes. The target retains a 32-byte frame, so the wrapper was deferred.
