# shutdown_async__10zip_filter

- Address: `0x003566F0`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/zip_filter.cpp`
- Reference source: `KS/SRC/zip_filter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released shutdown passes the static zlib stream to inflateEnd and returns its total_out count as int. The recovered stream address, 64-bit field, and offset match exactly.

## Outcome

The original asynchronous zip shutdown matches exactly, including inflateEnd and the static stream total-out return.
