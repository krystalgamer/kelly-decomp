# WAVE_AllocPartition__FRPcUi

- Address: `0x00379A30`
- Size: `0x58` (88 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released WavePartition allocator, 16-byte structure layout, guide/guidestep/weight fields, and char-reference advancement arithmetic. It matched byte-exactly.

## Outcome

Matched released wave partition allocator
