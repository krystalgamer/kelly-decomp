# shutdown__9WaveSound

- Address: `0x00255168`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/wavesound.cpp`
- Reference source: `KS/SRC/ks/wavesound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears `initialized` at `0x494`, `crashed` at `0x49C`, and `behindTheCamera` at `0x4AC`.

## Outcome

The released `WaveSound::shutdown` state clears matched exactly on the first attempt.
