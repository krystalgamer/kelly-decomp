# CheckShowMovie__Q26Career8Location

- Address: `0x0025B928`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-replay-menu-core.cpp` |

### Attempt 1 notes

The shared career location layout preserves the word-sized shown flag and
one-time setter.

## Outcome

The released `Career::Location::CheckShowMovie` implementation matched exactly.
