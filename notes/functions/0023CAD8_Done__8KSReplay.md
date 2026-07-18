# Done__8KSReplay

- Address: `0x0023CAD8`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate compares `playframe` at `0x34` against `numFrames` at `0x54`.

## Outcome

The released `KSReplay::Done` unsigned comparison matched exactly on the first attempt.
