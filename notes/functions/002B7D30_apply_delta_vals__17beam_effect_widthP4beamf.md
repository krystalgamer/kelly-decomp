# apply_delta_vals__17beam_effect_widthP4beamf

- Address: `0x002B7D30`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size44-widget-render-core.cpp` |

### Attempt 1 notes

The first candidate failed due to an access or exact signature-mangling mismatch.

### Attempt 2 notes

Minimal layouts preserve the width delta and beam thickness used by the released update.

### Attempt 3 notes

The shared beam declarations and a local function pointer preserve the normal
setter call without a compiler barrier.

## Outcome

The local layouts and compiler barrier were removed.
