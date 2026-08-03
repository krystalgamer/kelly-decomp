# os_free__FPv

- Address: `0x001DF9F0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_alloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_alloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `native_platform_forward_probe_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `native_platform_forward_probe_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `native_platform_forward_probe_3.cpp` |

## Outcome

Three ordinary C++ forms all compile as eight-byte sibling calls. The target
preserves a 28-byte call frame, so the former barrier-dependent match was
removed and the function was deferred.
