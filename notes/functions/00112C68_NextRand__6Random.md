# NextRand__6Random

- Address: `0x00112C68`
- Size: `0x24` (36 bytes)
- Object: `game/files_ai`
- Debug source: `random.h`
- Reference source: `KS/SRC/random.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `init36_candidate.cpp` |

### Attempt 1 notes

The released generator is the standard 32-bit LCG with a 15-bit returned sample.

## Outcome

The released `Random::NextRand` implementation matched exactly.
