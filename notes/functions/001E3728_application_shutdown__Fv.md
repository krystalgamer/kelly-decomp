# application_shutdown__Fv

- Address: `0x001E3728`
- Size: `0x88` (136 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.3235 | 82.3529 | `application-shutdown-1.cpp` |
| 2 | different | 71.3235 | 82.3529 | `application-shutdown-2.cpp` |
| 3 | different | 71.3235 | 82.3529 | `application-shutdown-3.cpp` |

## Outcome

Released singleton shutdown was restored with native declarations, but three source forms differed because the format literal is not yet canonically placed; the manual vtable implementation was removed.
