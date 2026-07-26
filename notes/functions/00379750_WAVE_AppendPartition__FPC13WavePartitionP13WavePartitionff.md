# WAVE_AppendPartition__FPC13WavePartitionP13WavePartitionff

- Address: `0x00379750`
- Size: `0xBC` (188 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.383 | 72.3404 | `candidate.cpp` |
| 2 | different | 78.0 | 70.0 | `candidate.cpp` |
| 3 | different | 81.383 | 72.3404 | `candidate.cpp` |
| 4 | different | 81.383 | 72.3404 | `candidate.cpp` |
| 5 | different | 81.383 | 72.3404 | `candidate.cpp` |

### Attempt 1 notes

The exact released body emitted every substantive instruction, but omitted
the target's extra floating-point compare hazard `nop`, leaving a 184-byte
function.

### Attempt 2 notes

Materializing the comparison around an empty compiler barrier added three
instructions instead of the single target hazard slot.

### Attempt 5 notes

Equivalent comparison spellings and barrier placements retained the
184-byte output; instruction-emitting assembly is prohibited.

## Outcome

The released append-partition body remained one compiler-generated floating-point hazard nop short; non-emitting source barriers could not recover it in five attempts.
