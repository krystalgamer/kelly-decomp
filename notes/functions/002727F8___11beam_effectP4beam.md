# __11beam_effectP4beam

- Address: `0x002727F8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.3333 | 93.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor matched all instructions except the high half of the negative-low vtable relocation under isolated compilation.

### Attempt 2 notes

Using the standard carried isolated alias for the real 0x004ECE88 vtable recovered the exact constructor bytes.

## Outcome

The released beam-effect field initialization and virtual layout match exactly with the standard carried vtable alias.
