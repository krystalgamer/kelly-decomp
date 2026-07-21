# Reset__15MeterAttackMode

- Address: `0x00286580`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Caching TIME_INITIAL and iterating the released PLAYER layout from each attackScore member reproduces the original five field resets and exact common-base countdown loop.

## Outcome

The released two-player field resets and counters match exactly using a common PLAYER-tail induction pointer.
