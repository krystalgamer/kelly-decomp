# swap__12MusicListingii

- Address: `0x00258CC0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.9444 | 0.0 | `candidate.cpp` |
| 2 | different | 40.2778 | 5.5556 | `candidate.cpp` |
| 3 | different | 31.9444 | 0.0 | `candidate.cpp` |
| 4 | different | 26.3889 | 11.1111 | `candidate.cpp` |
| 5 | different | 23.6111 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released swap body used the shared original MusicListing layout and correct order offset, but GCC factored the array base and produced a 68-byte schedule unlike the 72-byte target.

### Attempt 2 notes

A normalized barrier after loading the temporary prevented base reuse but inserted a nop and still scheduled all accesses differently.

### Attempt 3 notes

A barrier between current-index updates and array writes did not change the optimized schedule.

### Attempt 4 notes

An explicit reference alias for order[a] changed allocation but remained nonmatching.

### Attempt 5 notes

An explicit pointer to the order array also retained a 68-byte nonmatching schedule.

## Outcome

Deferred after five source attempts. All source-faithful forms preserve behavior and layout, but the available compiler consistently schedules the array accesses differently from the target.
