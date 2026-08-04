# read_value__9slc_num_tR10chunk_filePc

- Address: `0x00350070`
- Size: `0x20` (32 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-final-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-final-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-final-probes-3.cpp` |

## Outcome

All three shared-declaration forms adjust the arguments and tail-call `serial_in` in 12 bytes. The target retains a 32-byte frame, so the wrapper was deferred.
