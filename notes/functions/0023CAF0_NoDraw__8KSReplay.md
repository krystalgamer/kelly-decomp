# NoDraw__8KSReplay

- Address: `0x0023CAF0`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns the word-sized `noDraw` flag at offset `0x78`.

## Outcome

The released `KSReplay::NoDraw` field getter matched exactly on the first attempt.
