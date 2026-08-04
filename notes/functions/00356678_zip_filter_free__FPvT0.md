# zip_filter_free__FPvT0

- Address: `0x00356678`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/zip_filter.cpp`
- Reference source: `KS/SRC/zip_filter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size28-final1-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size28-final1-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size28-final1-probes-3.cpp` |

## Outcome

All three forms move the second argument into `$4` and tail-call `arch_free`.
The target retains a normal 28-byte call frame, so the callback was deferred.
