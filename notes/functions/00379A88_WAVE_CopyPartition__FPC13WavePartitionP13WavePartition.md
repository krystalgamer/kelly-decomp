# WAVE_CopyPartition__FPC13WavePartitionP13WavePartition

- Address: `0x00379A88`
- Size: `0x70` (112 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.75 | 60.7143 | `candidate.cpp` |
| 2 | different | 89.2857 | 85.7143 | `candidate.cpp` |
| 3 | different | 89.2857 | 85.7143 | `candidate.cpp` |
| 4 | different | 83.0357 | 75.0 | `candidate.cpp` |
| 5 | different | 87.5 | 82.1429 | `candidate.cpp` |

## Outcome

Deferred wave partition copying after five source-level attempts; the released three memcpy operations reproduced byte-for-byte beyond the prologue, but the target callee-save ordering did not.
