# __t13instance_bank1Z8vr_pmesh

- Address: `0x002FD8A8`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.434 | 39.6226 | `candidate.cpp` |
| 2 | different | 62.2642 | 41.5094 | `candidate.cpp` |
| 3 | different | 31.9444 | 16.6667 | `candidate.cpp` |
| 4 | different | 68.0556 | 59.2593 | `candidate.cpp` |
| 5 | different | 94.8113 | 83.0189 | `candidate.cpp` |

### Attempt 1 notes

A non-template source-faithful model recovered target size, allocator calls, both tree layouts, and the 80-byte frame, but scheduling differed throughout.

### Attempt 2 notes

An unused volatile constructor area improved the prologue and allocator schedule to 62.2642%.

### Attempt 3 notes

Pinning the source-file pointer forced an extra instruction and disturbed register scheduling.

### Attempt 4 notes

Keeping the allocated node local matched the complete first tree and second allocation setup, reaching 68.0556%.

### Attempt 5 notes

A separate second-tree initialization recovered target size and matched all but the final nine scheduler instructions; best byte score was 94.8113%.

## Outcome

Recovered the exact two-tree allocator sequence, target size, source-file binding, and complete first-tree schedule. Five candidates could not reproduce the final nine second-tree scheduler instructions; best byte score was 94.8113%.
