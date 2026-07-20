# __15DemoModeManager

- Address: `0x001F9FB0`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/DemoMode.cpp`
- Reference source: `KS/SRC/ks/DemoMode.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor assignments matched exactly with the timing/state fields at offsets 0x0-0x18. The target also carries the replay-file/user-data initializer at offset 0x6c, modeled explicitly in the isolated layout.

## Outcome

The released demo-mode manager constructor matched exactly on the first attempt.
