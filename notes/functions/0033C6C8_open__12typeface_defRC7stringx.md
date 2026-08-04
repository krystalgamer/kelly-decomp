# open__12typeface_defRC7stringx

- Address: `0x0033C6C8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size28-final1-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size28-final1-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size28-final1-probes-3.cpp` |

## Outcome

All three forms tail-call `stringx::operator=` with the member adjustment in
the delay slot. The target retains a 28-byte frame, so the wrapper was deferred.
