# MainPOFrames__8KSReplay

- Address: `0x0023CAF8`
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

The released accessor returns `MAINENTITY_UPDATEFRAMES`, which is `4` in the target.

## Outcome

The released fixed `KSReplay::MainPOFrames` value matched exactly on the first attempt.
