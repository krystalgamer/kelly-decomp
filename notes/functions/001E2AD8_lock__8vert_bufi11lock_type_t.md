# lock__8vert_bufi11lock_type_t

- Address: `0x001E2AD8`
- Size: `0xDC` (220 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.9138 | 46.2963 | `candidate-round1.cpp` |
| 2 | different | 78.1818 | 85.7143 | `candidate-round2.cpp` |
| 3 | different | 78.6364 | 87.7551 | `candidate-round3.cpp` |
| 4 | different | 77.7273 | 83.6735 | `candidate-round4b.cpp` |
| 5 | different | 78.6364 | 87.7551 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released vert_buf::lock body with reconstructed ref, vertex, color, vector, allocation, and lock declarations. The pretty-function allocation description remained relocatable and GCC reloaded max_size after allocation, producing 232 bytes.

### Attempt 2 notes

Bound the allocation description and used _max_size directly for the array count. This recovered the allocation/result registers and reduced the candidate to 212 bytes, but the target constructor loop contained two additional scheduling nops.

### Attempt 3 notes

Adjusted the bound description address for the signed low-half encoding and retained the direct count. The address materialization matched and 43 instructions agreed, but the constructor loop remained eight bytes short.

### Attempt 4 notes

Added empty constructor base classes to reproduce the target no-op constructor scheduling. Old EE GCC increased vector2d and hw_rasta_vert sizes instead, changing the allocation stride to 68 bytes.

### Attempt 5 notes

Restored the 60-byte vertex layout and added instruction-free constructor barriers. The emitted loop remained 212 bytes with the same missing two nops and branch-delay schedule as the best prior candidate.

## Outcome

Deferred after five source-level attempts. The exact 60-byte vertex layout, allocation call, object fields, and most control flow were recovered, but the compiler-generated empty constructor loop remained eight bytes shorter with different delay-slot scheduling.
