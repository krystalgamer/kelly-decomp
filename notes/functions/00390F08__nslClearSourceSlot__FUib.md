# _nslClearSourceSlot__FUib

- Address: `0x00390F08`
- Size: `0xBC` (188 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.0851 | 0.0 | `candidate.cpp` |
| 2 | different | 74.0196 | 68.6275 | `candidate.cpp` |
| 3 | different | 75.4902 | 68.6275 | `candidate.cpp` |
| 4 | different | 51.0638 | 38.2979 | `candidate.cpp` |
| 5 | different | 63.2979 | 46.8085 | `candidate.cpp` |

### Attempt 1 notes

The exact released reset body retained an out-of-line `strcpy` when the
target's shared `"unused"` constant was declared externally.

### Attempt 3 notes

An aligned seven-byte `memcpy` reached the best score, but EE GCC still used
unaligned `lwl`/`lwr` copies instead of the target word, halfword, and byte
sequence.

### Attempt 5 notes

Explicit aligned loads, the released slot register, and a narrow scheduling
barrier produced the target size but not its store/load schedule.

## Outcome

Five source-level forms could not reproduce the target's inlined aligned copy and surrounding source-slot reset schedule without instruction-emitting assembly.
