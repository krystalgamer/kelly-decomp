# host_fopen__FPCc18host_fopen_flags_t

- Address: `0x001E0FD0`
- Size: `0x88` (136 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.7941 | 8.8235 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 30.8824 | 20.5882 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 70.5882 | 64.7059 | `candidate.cpp` |

## Outcome

Deferred the released host-file open wrapper after five source-level attempts; flag mapping, temporary filename construction, os_file open, cleanup, and handle return were reconstructed, but switch and call setup scheduling remained different.
