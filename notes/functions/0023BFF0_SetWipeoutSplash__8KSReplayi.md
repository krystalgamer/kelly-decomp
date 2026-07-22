# SetWipeoutSplash__8KSReplayi

- Address: `0x0023BFF0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released body was tested first after reconstructing the released KSEntityState bitfields and KSReplay member layout in a shared original-path header. The target predates the snapshot by retaining the numFrames < maxFrames guard already seen in SetEndWave; adding that source-level guard produced an exact match.

## Outcome

Matched with the released source behavior and shared declarations, plus the target-era frame-bound guard.
