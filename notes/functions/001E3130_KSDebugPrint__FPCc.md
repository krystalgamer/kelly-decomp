# KSDebugPrint__FPCc

- Address: `0x001E3130`
- Size: `0x38` (56 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.6429 | 7.1429 | `debug-print-1.cpp` |
| 2 | different | 19.6429 | 7.1429 | `debug-print-2.cpp` |
| 3 | different | 83.9286 | 100.0 | `debug-print-3.cpp` |

## Outcome

Released debug branch tail-calls the SDK printers under native compilation; three C++ forms were tried and the prior forced C-linkage/barrier match was removed.
