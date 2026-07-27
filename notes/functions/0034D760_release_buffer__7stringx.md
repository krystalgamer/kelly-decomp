# release_buffer__7stringx

- Address: `0x0034D760`
- Size: `0xEC` (236 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.1525 | 33.8983 | `candidate.cpp` |
| 2 | different | 49.1525 | 33.8983 | `candidate.cpp` |
| 3 | different | 49.1525 | 33.8983 | `candidate.cpp` |
| 4 | different | 49.1525 | 33.8983 | `candidate.cpp` |
| 5 | different | 49.1525 | 33.8983 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact string buffer release behavior and pool layout are recovered, but target preserves the buffer pointer with an extra a2=a0 move while isolated GCC allocates it directly in a2, leaving one instruction absent.
