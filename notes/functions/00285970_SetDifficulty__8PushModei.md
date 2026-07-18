# SetDifficulty__8PushModei

- Address: `0x00285970`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions compiled out, the released setter writes `scoreRequired` at offset `0x44`.

## Outcome

The released `PushMode::SetDifficulty` setter matched exactly on the first attempt.
