# IsPlaying__8KSReplay

- Address: `0x0023BE08`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate compares `status` at offset `0x10` with `REPLAY_PLAYBACK` (`2`).

## Outcome

The released `KSReplay::IsPlaying` status predicate matched exactly on the first attempt.
