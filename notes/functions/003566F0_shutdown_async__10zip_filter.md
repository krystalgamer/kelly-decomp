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

The released shutdown uses the shared zip-filter stream declaration, passes
the static stream to `inflateEnd`, and returns `total_out`.

## Outcome

The local zlib stream and filter declarations were removed.
