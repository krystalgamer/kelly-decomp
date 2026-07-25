# Term__8KSReplay

- Address: `0x0023B2E8`
- Size: `0xA8` (168 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.5714 | 9.5238 | `candidate.cpp` |
| 2 | different | 98.8095 | 95.2381 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released array cleanup matched after ordering the collision counters to reproduce store scheduling on Sol attempt three.

## Outcome

Matched replay buffer termination and pointer reset.
