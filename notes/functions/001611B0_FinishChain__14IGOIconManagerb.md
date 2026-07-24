# FinishChain__14IGOIconManagerb

- Address: `0x001611B0`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.9394 | 93.9394 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released icon-chain completion matched after loading the score-text pointer before clearing its size so the clear occupied the call delay slot.

## Outcome

The released icon-chain completion matched exactly on the second attempt.
