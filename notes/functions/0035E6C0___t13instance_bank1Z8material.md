# __t13instance_bank1Z8material

- Address: `0x0035E6C0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.8113 | 83.0189 | `candidate.cpp` |
| 2 | different | 96.6981 | 86.7925 | `candidate.cpp` |
| 3 | different | 34.5455 | 14.5455 | `candidate.cpp` |
| 4 | different | 89.6226 | 83.0189 | `candidate.cpp` |
| 5 | different | 89.6226 | 83.0189 | `candidate.cpp` |

### Attempt 1 notes

The shared two-tree constructor model matched all but the final second-tree scheduler block, reaching 94.8113%.

### Attempt 2 notes

Using count-before-comparator ordering for both trees matched target size and all but three instructions; best byte score was 96.6981%.

### Attempt 3 notes

Pinning the first header pointer introduced extra register moves and expanded the function.

### Attempt 4 notes

A normal first-header local retained target size but disturbed the first-tree load schedule.

### Attempt 5 notes

Combining the direct first-tree load with a local second allocation did not preserve the 96.6981% schedule.

## Outcome

Recovered the exact two-tree allocator sequence and target size for the material bank. Five candidates could not reproduce three remaining load/branch scheduler instructions; best byte score was 96.6981%.
