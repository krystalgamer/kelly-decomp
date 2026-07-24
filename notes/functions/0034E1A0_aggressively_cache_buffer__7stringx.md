# aggressively_cache_buffer__7stringx

- Address: `0x0034E1A0`
- Size: `0x80` (128 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.4375 | 93.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released aggressive string buffer caching matched after treating find_cached_string as the static helper used by the target.

## Outcome

The released aggressive string buffer caching matched exactly on the second attempt.
