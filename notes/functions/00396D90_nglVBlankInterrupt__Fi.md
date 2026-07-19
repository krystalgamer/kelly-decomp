# nglVBlankInterrupt__Fi

- Address: `0x00396D90`
- Size: `0x20` (32 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.875 | 87.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used the effective global address without the `%hi` carry required by its negative low half.

### Attempt 2 notes

The released handler increments the global VBlank counter, emits the PS2 synchronization/interrupt-enable sequence, and returns zero.

## Outcome

The released `nglVBlankInterrupt` handler matched exactly.
