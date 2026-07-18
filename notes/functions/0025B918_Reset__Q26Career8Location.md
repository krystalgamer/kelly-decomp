# Reset__Q26Career8Location

- Address: `0x0025B918`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset clears the three location flags at offsets `0x4`, `0x8`, and `0xC`.

## Outcome

The released `Career::Location::Reset` flag clears matched exactly on the first attempt.
