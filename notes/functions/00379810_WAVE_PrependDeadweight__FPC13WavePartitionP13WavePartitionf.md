# WAVE_PrependDeadweight__FPC13WavePartitionP13WavePartitionf

- Address: `0x00379810`
- Size: `0xF4` (244 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.1639 | 88.5246 | `candidate.cpp` |

### Attempt 1 notes

Exact released `WAVE_PrependDeadweight` body with the canonical `WavePartition` type and authentic partition helpers. It emitted the exact 244-byte computation and call sequence; only the prologue ordering of `ra`, `s0`, and saved floating-point registers differs from the target.

## Outcome

Exact released deadweight partition code differed only in prologue save scheduling.
