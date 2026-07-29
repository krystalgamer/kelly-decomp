# DoBreakCameraWork__11auto_camera

- Address: `0x0022CE10`
- Size: `0x1F4` (500 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave93 A4 — 0x0022CE10

- Confirmed queue state was `pending` with `attempts=0`; prepared scratch showed `[]`.
- Intended one LF exact-body candidate with minimal faithful declarations and no unavailable headers.
- Candidate-generation command failed because `python` was unavailable before the chained test command continued.
- The sole test therefore consumed the generated prepare placeholder and emitted no function symbol.
- Result: `symbol_missing`, score `0.0`; no retry or post-test chase performed.
- Tracked/reference trees were not modified; not finalized or integrated.

## Outcome

The exact released break-camera work candidate compiled without emitting the target symbol; no source variant was attempted.
