# nglSetViewport__FUiUiUiUi

- Address: `0x00398558`
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

A minimal scene layout preserves the four viewport fields at offsets 0x410 through 0x41c.

## Outcome

The released `nglSetViewport` field setter matched exactly.
