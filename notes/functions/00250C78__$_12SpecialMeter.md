# _$_12SpecialMeter

- Address: `0x00250C78`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-challenge-dtors.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-challenge-dtors-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-challenge-dtors-3.cpp` |

## Outcome

All three native empty destructors emit 20-byte vptr-setting tail calls rather
than the target 40-byte base-destructor frame. The manual-vtable body was
removed and the target function was deferred.
