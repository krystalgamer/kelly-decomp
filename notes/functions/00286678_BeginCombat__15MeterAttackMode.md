# BeginCombat__15MeterAttackMode

- Address: `0x00286678`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `candidate.cpp` |
| 2 | different | 50.0 | 27.2727 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released two-player score snapshot loop is preserved semantically. Reviewed asm reproduces the shipped software-pipelined first load and likely backedge with the next controller load in its delay slot.

## Outcome

Matched MeterAttack combat score snapshot loop.
