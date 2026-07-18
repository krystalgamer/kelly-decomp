# c_str__C12chunk_flavor

- Address: `0x00336B28`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns the inline `flavor` buffer at offset `0x0`.

## Outcome

The released `chunk_flavor::c_str` address return matched exactly on the first attempt.
