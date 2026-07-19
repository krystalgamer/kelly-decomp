# nglSetFogRange__Fffff

- Address: `0x00398638`
- Size: `0x1C` (28 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.4286 | 85.7143 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used the effective global address without the `%hi` carry required by the negative low half.

### Attempt 2 notes

A minimal scene layout preserves the four fog range fields at offsets 0x44c through 0x458.

## Outcome

The released `nglSetFogRange` field setter matched exactly.
