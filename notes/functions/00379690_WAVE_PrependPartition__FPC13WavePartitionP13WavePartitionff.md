# WAVE_PrependPartition__FPC13WavePartitionP13WavePartitionff

- Address: `0x00379690`
- Size: `0xBC` (188 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1489 | 93.617 | `candidate.cpp` |
| 2 | different | 57.9787 | 40.4255 | `candidate.cpp` |
| 3 | different | 94.1489 | 93.617 | `candidate.cpp` |
| 4 | different | 94.1489 | 93.617 | `candidate.cpp` |
| 5 | different | 94.1489 | 93.617 | `candidate.cpp` |

### Attempt 1 notes

The exact released partition copy matched 44 of 47 instructions; only the
initial loop-index, pointer increment, and first-guide store schedule differed.

### Attempt 5 notes

Separate first-guide forms and a narrow compiler barrier could not reproduce
the target's three-instruction ordering without emitting different code.

## Outcome

The exact prepend-partition logic matched 44 of 47 instructions, but five source-level schedules could not reproduce the target's first-copy instruction order.
