# Reset__Q26Career5Beach

- Address: `0x0025C4A0`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset clears `unlocked` at `0x4` then `shown` at `0x8`; EE GCC schedules the first source store into the delay slot.

## Outcome

The released `Career::Beach::Reset` flag clears matched exactly on the first attempt.
