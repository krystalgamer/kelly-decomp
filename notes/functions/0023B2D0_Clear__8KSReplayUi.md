# Clear__8KSReplayUi

- Address: `0x0023B2D0`
- Size: `0x18` (24 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method stores `seed` at `0xC` and clears status/frame/collision fields at `0x10`, `0x54`, `0xCC`, and `0xD0`.

## Outcome

The released `KSReplay::Clear` state reset matched exactly on the first attempt.
