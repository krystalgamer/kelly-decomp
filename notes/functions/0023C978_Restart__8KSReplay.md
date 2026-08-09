# Restart__8KSReplay

- Address: `0x0023C978`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-replay-menu-core.cpp` |

### Attempt 1 notes

The shared replay layout places `firstFrame` at 0xd4 and preserves the
released playback call.

## Outcome

The released `KSReplay::Restart` implementation matched exactly.
