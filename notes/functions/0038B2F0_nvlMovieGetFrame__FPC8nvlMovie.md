# nvlMovieGetFrame__FPC8nvlMovie

- Address: `0x0038B2F0`
- Size: `0x50` (80 bytes)
- Object: `nvl/nvl_ps2`
- Debug source: `C:/NVL/ps2/nvl_ps2.cpp`
- Reference source: `NVL/PS2/nvl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.75 | 95.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released nvlMovie layout, initialization assertion, source line, and current-frame return. Reused the target assertion strings and encoded global address.

## Outcome

Matched released nvlMovieGetFrame body
