# initKSConfigStruct__FP12ksConfigData

- Address: `0x001A2B50`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GameData.cpp`
- Reference source: `KS/SRC/ks/GameData.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 9.6154 | `candidate.cpp` |
| 2 | different | 12.7049 | 0.0 | `candidate.cpp` |
| 3 | different | 50.0 | 35.2941 | `candidate.cpp` |
| 4 | different | 34.6939 | 6.1224 | `candidate.cpp` |
| 5 | different | 41.8367 | 26.5306 | `candidate.cpp` |

### Attempt 1 notes

Exact released assignments with the first reconstructed layout produced
separate order/enabled pointers and bytewise camera tails.

### Attempt 2 notes

Packed fixed-address camera records expanded into byte assembly and moved far
from the target schedule.

### Attempt 3 notes

The corrected four-controller layout and shared enabled pointer recovered the
target field offsets and loop semantics.

### Attempt 4 notes

Constant-size built-in copies recovered halfword camera tails but retained
duplicate source-address materialization.

### Attempt 5 notes

Fixed source, destination, and loop registers still emitted 196 bytes and did
not reproduce the original initialization schedule.

## Outcome

Five source-level variants recovered the released field values, camera strings, playlist ordering, and four-controller rumble layout, but the original unaligned-copy and loop scheduling did not match.
